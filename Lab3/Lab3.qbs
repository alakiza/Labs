import qbs

Project {
    minimumQbsVersion: "1.7.1"

    CppApplication {
        Depends { name: 'cpp' }
        consoleApplication: true
        cpp.includePaths: [ 'Sources', 'Headers']
        files: [
            "Headers/customexpressionevaluator.h",
            "Headers/expressionevaluator.h",
            "Headers/iloggable.h",
            "Headers/ishuffle.h",
            "Headers/multiplier.h",
            "Headers/divisor.h",
            "Headers/summator.h",
            "Headers/substractor.h",
            "Sources/customexpressionevaluator.cpp",
            "Sources/divisor.cpp",
            "Sources/expressionevaluator.cpp",
            "Sources/multiplier.cpp",
            "Sources/substractor.cpp",
            "Sources/summator.cpp",
            "main.cpp",
        ]

        Group {     // Properties for the produced executable
            fileTagsFilter: "application"
            qbs.install: true
        }
    }
}
