// per-device BSP DXEs

// ACPI Tables
FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {   
  SECTION RAW = Platform/Xiaomi/sm6150/AcpiTables/violet/DSDT.aml
  SECTION RAW = Silicon/Qualcomm/sm6150/AcpiTables/APIC.aml
  SECTION RAW = Silicon/Qualcomm/sm6150/AcpiTables/FACP.aml
  SECTION RAW = Silicon/Qualcomm/sm6150/AcpiTables/GTDT.aml

  SECTION UI = "AcpiTables"
}

FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  SECTION RAW = Platform/Xiaomi/sm6150/FdtBlob_compat/violet.dtb
}

