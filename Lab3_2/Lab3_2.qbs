import qbs

Project {
    minimumQbsVersion: "1.7.0"

    CppApplication {
        consoleApplication: true
        files: [
            "conditioner.cpp",
            "conditioner.h",
            "heatingdevice.cpp",
            "heatingdevice.h",
            "homeappliance.cpp",
            "homeappliance.h",
            "icontrollable.h",
            "main.cpp",
        ]

        Group {     // Properties for the produced executable
            fileTagsFilter: "application"
            qbs.install: true
        }
    }
}
