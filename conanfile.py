#!/usr/bin/env python
# -*- coding: utf-8 -*-
from conans import ConanFile, CMake

class MiminalQtApp(ConanFile):
    name = "minimal_app"
    version  = "0.1"
    description = """Minimal Qt App"""
    author = "Vitaly V. Kolyvanov"

    settings = "os", "compiler", "build_type", "arch"
    requires = "qt/5.15.2@bincrafters/stable"
    generators = "cmake"

    def imports(self):
        self.copy("*.dll", dst="bin", src="bin")
        self.copy('*.so*', dst='lib', src='lib')

    def build(self):
        cmake = CMake(self, generator="Ninja")
        cmake.definitions["CONAN_DISABLE_CHECK_COMPILER"] = "ON"
        cmake.configure()
        cmake.build()
