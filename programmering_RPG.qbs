import qbs

CppApplication {
    consoleApplication: true
    files: [
        "equipment.cpp",
        "equipment.h",
        "main.cpp",
        "party.cpp",
        "party.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
