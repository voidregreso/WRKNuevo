//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: 0x00000001L (No symbolic name defined)
//
// MessageText:
//
//  APC_INDEX_MISMATCH
//


//
// MessageId: 0x00000002L (No symbolic name defined)
//
// MessageText:
//
//  DEVICE_QUEUE_NOT_BUSY
//


//
// MessageId: 0x00000003L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_AFFINITY_SET
//


//
// MessageId: 0x00000004L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_DATA_ACCESS_TRAP
//


//
// MessageId: 0x00000005L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_PROCESS_ATTACH_ATTEMPT
//


//
// MessageId: 0x00000006L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_PROCESS_DETACH_ATTEMPT
//


//
// MessageId: 0x00000007L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_SOFTWARE_INTERRUPT
//


//
// MessageId: 0x00000008L (No symbolic name defined)
//
// MessageText:
//
//  IRQL_NOT_DISPATCH_LEVEL
//


//
// MessageId: 0x00000009L (No symbolic name defined)
//
// MessageText:
//
//  IRQL_NOT_GREATER_OR_EQUAL
//


//
// MessageId: 0x0000000AL (No symbolic name defined)
//
// MessageText:
//
//  IRQL_NOT_LESS_OR_EQUAL
//


//
// MessageId: 0x0000000BL (No symbolic name defined)
//
// MessageText:
//
//  NO_EXCEPTION_HANDLING_SUPPORT
//


//
// MessageId: 0x0000000CL (No symbolic name defined)
//
// MessageText:
//
//  MAXIMUM_WAIT_OBJECTS_EXCEEDED
//


//
// MessageId: 0x0000000DL (No symbolic name defined)
//
// MessageText:
//
//  MUTEX_LEVEL_NUMBER_VIOLATION
//


//
// MessageId: 0x0000000EL (No symbolic name defined)
//
// MessageText:
//
//  NO_USER_MODE_CONTEXT
//


//
// MessageId: 0x0000000FL (No symbolic name defined)
//
// MessageText:
//
//  SPIN_LOCK_ALREADY_OWNED
//


//
// MessageId: 0x00000010L (No symbolic name defined)
//
// MessageText:
//
//  SPIN_LOCK_NOT_OWNED
//


//
// MessageId: 0x00000011L (No symbolic name defined)
//
// MessageText:
//
//  THREAD_NOT_MUTEX_OWNER
//


//
// MessageId: 0x00000012L (No symbolic name defined)
//
// MessageText:
//
//  TRAP_CAUSE_UNKNOWN
//


//
// MessageId: 0x00000013L (No symbolic name defined)
//
// MessageText:
//
//  EMPTY_THREAD_REAPER_LIST
//


//
// MessageId: 0x00000014L (No symbolic name defined)
//
// MessageText:
//
//  CREATE_DELETE_LOCK_NOT_LOCKED
//


//
// MessageId: 0x00000015L (No symbolic name defined)
//
// MessageText:
//
//  LAST_CHANCE_CALLED_FROM_KMODE
//


//
// MessageId: 0x00000016L (No symbolic name defined)
//
// MessageText:
//
//  CID_HANDLE_CREATION
//


//
// MessageId: 0x00000017L (No symbolic name defined)
//
// MessageText:
//
//  CID_HANDLE_DELETION
//


//
// MessageId: 0x00000018L (No symbolic name defined)
//
// MessageText:
//
//  REFERENCE_BY_POINTER
//


//
// MessageId: 0x00000019L (No symbolic name defined)
//
// MessageText:
//
//  BAD_POOL_HEADER
//


//
// MessageId: 0x0000001AL (No symbolic name defined)
//
// MessageText:
//
//  MEMORY_MANAGEMENT
//


//
// MessageId: 0x0000001BL (No symbolic name defined)
//
// MessageText:
//
//  PFN_SHARE_COUNT
//


//
// MessageId: 0x0000001CL (No symbolic name defined)
//
// MessageText:
//
//  PFN_REFERENCE_COUNT
//


//
// MessageId: 0x0000001DL (No symbolic name defined)
//
// MessageText:
//
//  NO_SPIN_LOCK_AVAILABLE
//


//
// MessageId: 0x0000001EL (No symbolic name defined)
//
// MessageText:
//
//  Asegúrate de tener suficiente espacio en disco. Si se identifica
//  un controlador en el mensaje de error, desactiva el controlador
//  o consulta al fabricante para obtener actualizaciones del
//  controlador. Intenta cambiar los adaptadores de vídeo.
//  
//  Consulta con tu proveedor de hardware  para ver si hay
//  actualizaciones de la BIOS. Desactiva opciones de memoria
//  como el almacenamiento en cach?o la sombra. Si necesitas
//  usar el Modo Seguro para eliminar o desactivar componentes,
//  reinicia tu ordenador, presiona F8 para seleccionar Opciones
//  Avanzadas de Inicio y luego elige Modo Seguro.
//


//
// MessageId: 0x0000001FL (No symbolic name defined)
//
// MessageText:
//
//  SHARED_RESOURCE_CONV_ERROR
//


//
// MessageId: 0x00000020L (No symbolic name defined)
//
// MessageText:
//
//  KERNEL_APC_PENDING_DURING_EXIT
//


//
// MessageId: 0x00000021L (No symbolic name defined)
//
// MessageText:
//
//  QUOTA_UNDERFLOW
//


//
// MessageId: 0x00000022L (No symbolic name defined)
//
// MessageText:
//
//  FILE_SYSTEM
//


//
// MessageId: 0x00000023L (No symbolic name defined)
//
// MessageText:
//
//  Desactiva o desinstala cualquier antivirus, desfragmentador
//  de disco o utilidades de copia de seguridad. Verifica la
//  configuración de tu disco duro y busca actualizaciones de
//  controladores. Ejecuta CHKDSK /F para comprobar si hay
//  corrupción en el disco duro y luego reinicia tu ordenador.
//


//
// MessageId: 0x00000024L (No symbolic name defined)
//
// MessageText:
//
//  NTFS_FILE_SYSTEM
//


//
// MessageId: 0x00000025L (No symbolic name defined)
//
// MessageText:
//
//  NPFS_FILE_SYSTEM
//


//
// MessageId: 0x00000026L (No symbolic name defined)
//
// MessageText:
//
//  CDFS_FILE_SYSTEM
//


//
// MessageId: 0x00000027L (No symbolic name defined)
//
// MessageText:
//
//  RDR_FILE_SYSTEM
//


//
// MessageId: 0x00000028L (No symbolic name defined)
//
// MessageText:
//
//  CORRUPT_ACCESS_TOKEN
//


//
// MessageId: 0x00000029L (No symbolic name defined)
//
// MessageText:
//
//  SECURITY_SYSTEM
//


//
// MessageId: 0x0000002AL (No symbolic name defined)
//
// MessageText:
//
//  INCONSISTENT_IRP
//


//
// MessageId: 0x0000002BL (No symbolic name defined)
//
// MessageText:
//
//  PANIC_STACK_SWITCH
//


//
// MessageId: 0x0000002CL (No symbolic name defined)
//
// MessageText:
//
//  PORT_DRIVER_INTERNAL
//


//
// MessageId: 0x0000002DL (No symbolic name defined)
//
// MessageText:
//
//  SCSI_DISK_DRIVER_INTERNAL
//


//
// MessageId: 0x0000002EL (No symbolic name defined)
//
// MessageText:
//
//  Ejecuta diagnósticos del sistema proporcionados por el
//  fabricante de tu hardware. En particular, realiza una
//  comprobación de memoria y verifica si hay memoria defectuosa
//  o no compatible. Intenta cambiar adaptadores de vídeo.
//  
//  Consulta con tu proveedor de hardware por actualizaciones de la
//  BIOS. Desactiva opciones de memoria en la BIOS, como el cach?
//  o la sombra. Si necesitas usar el Modo Seguro para eliminar o
//  desactivar componentes, reinicia tu ordenador, presiona F8 para
//  seleccionar Opciones Avanzadas de Inicio y luego elige Modo Seguro.
//


//
// MessageId: 0x0000002FL (No symbolic name defined)
//
// MessageText:
//
//  INSTRUCTION_BUS_ERROR
//


//
// MessageId: 0x00000030L (No symbolic name defined)
//
// MessageText:
//
//  SET_OF_INVALID_CONTEXT
//


//
// MessageId: 0x00000031L (No symbolic name defined)
//
// MessageText:
//
//  PHASE0_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000032L (No symbolic name defined)
//
// MessageText:
//
//  PHASE1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000033L (No symbolic name defined)
//
// MessageText:
//
//  UNEXPECTED_INITIALIZATION_CALL
//


//
// MessageId: 0x00000034L (No symbolic name defined)
//
// MessageText:
//
//  CACHE_MANAGER
//


//
// MessageId: 0x00000035L (No symbolic name defined)
//
// MessageText:
//
//  NO_MORE_IRP_STACK_LOCATIONS
//


//
// MessageId: 0x00000036L (No symbolic name defined)
//
// MessageText:
//
//  DEVICE_REFERENCE_COUNT_NOT_ZERO
//


//
// MessageId: 0x00000037L (No symbolic name defined)
//
// MessageText:
//
//  FLOPPY_INTERNAL_ERROR
//


//
// MessageId: 0x00000038L (No symbolic name defined)
//
// MessageText:
//
//  SERIAL_DRIVER_INTERNAL
//


//
// MessageId: 0x00000039L (No symbolic name defined)
//
// MessageText:
//
//  SYSTEM_EXIT_OWNED_MUTEX
//


//
// MessageId: 0x0000003AL (No symbolic name defined)
//
// MessageText:
//
//  SYSTEM_UNWIND_PREVIOUS_USER
//


//
// MessageId: 0x0000003BL (No symbolic name defined)
//
// MessageText:
//
//  SYSTEM_SERVICE_EXCEPTION
//


//
// MessageId: 0x0000003CL (No symbolic name defined)
//
// MessageText:
//
//  INTERRUPT_UNWIND_ATTEMPTED
//


//
// MessageId: 0x0000003DL (No symbolic name defined)
//
// MessageText:
//
//  INTERRUPT_EXCEPTION_NOT_HANDLED
//


//
// MessageId: 0x0000003EL (No symbolic name defined)
//
// MessageText:
//
//  MULTIPROCESSOR_CONFIGURATION_NOT_SUPPORTED
//


//
// MessageId: 0x0000003FL (No symbolic name defined)
//
// MessageText:
//
//  Eliminar cualquier software instalado recientemente, 
//  incluyendo utilidades de respaldo o aplicaciones intensivas 
//  en el uso del disco.
//  
//  Si es necesario, utiliza el Modo Seguro para desactivar 
//  componentes: reinicia la computadora, presiona F8, elige 
//  Opciones Avanzadas de Inicio y selecciona Modo Seguro.
//


//
// MessageId: 0x00000040L (No symbolic name defined)
//
// MessageText:
//
//  TARGET_MDL_TOO_SMALL
//


//
// MessageId: 0x00000041L (No symbolic name defined)
//
// MessageText:
//
//  MUST_SUCCEED_POOL_EMPTY
//


//
// MessageId: 0x00000042L (No symbolic name defined)
//
// MessageText:
//
//  ATDISK_DRIVER_INTERNAL
//


//
// MessageId: 0x00000043L (No symbolic name defined)
//
// MessageText:
//
//  NO_SUCH_PARTITION
//


//
// MessageId: 0x00000044L (No symbolic name defined)
//
// MessageText:
//
//  MULTIPLE_IRP_COMPLETE_REQUESTS
//


//
// MessageId: 0x00000045L (No symbolic name defined)
//
// MessageText:
//
//  INSUFFICIENT_SYSTEM_MAP_REGS
//


//
// MessageId: 0x00000046L (No symbolic name defined)
//
// MessageText:
//
//  DEREF_UNKNOWN_LOGON_SESSION
//


//
// MessageId: 0x00000047L (No symbolic name defined)
//
// MessageText:
//
//  REF_UNKNOWN_LOGON_SESSION
//


//
// MessageId: 0x00000048L (No symbolic name defined)
//
// MessageText:
//
//  CANCEL_STATE_IN_COMPLETED_IRP
//


//
// MessageId: 0x00000049L (No symbolic name defined)
//
// MessageText:
//
//  PAGE_FAULT_WITH_INTERRUPTS_OFF
//


//
// MessageId: 0x0000004AL (No symbolic name defined)
//
// MessageText:
//
//  IRQL_GT_ZERO_AT_SYSTEM_SERVICE
//


//
// MessageId: 0x0000004BL (No symbolic name defined)
//
// MessageText:
//
//  STREAMS_INTERNAL_ERROR
//


//
// MessageId: 0x0000004CL (No symbolic name defined)
//
// MessageText:
//
//  FATAL_UNHANDLED_HARD_ERROR
//


//
// MessageId: 0x0000004DL (No symbolic name defined)
//
// MessageText:
//
//  NO_PAGES_AVAILABLE
//


//
// MessageId: 0x0000004EL (No symbolic name defined)
//
// MessageText:
//
//  PFN_LIST_CORRUPT
//


//
// MessageId: 0x0000004FL (No symbolic name defined)
//
// MessageText:
//
//  NDIS_INTERNAL_ERROR
//


//
// MessageId: 0x00000050L (No symbolic name defined)
//
// MessageText:
//
//  PAGE_FAULT_IN_NONPAGED_AREA
//


//
// MessageId: 0x00000051L (No symbolic name defined)
//
// MessageText:
//
//  REGISTRY_ERROR
//


//
// MessageId: 0x00000052L (No symbolic name defined)
//
// MessageText:
//
//  MAILSLOT_FILE_SYSTEM
//


//
// MessageId: 0x00000053L (No symbolic name defined)
//
// MessageText:
//
//  NO_BOOT_DEVICE
//


//
// MessageId: 0x00000054L (No symbolic name defined)
//
// MessageText:
//
//  LM_SERVER_INTERNAL_ERROR
//


//
// MessageId: 0x00000055L (No symbolic name defined)
//
// MessageText:
//
//  DATA_COHERENCY_EXCEPTION
//


//
// MessageId: 0x00000056L (No symbolic name defined)
//
// MessageText:
//
//  INSTRUCTION_COHERENCY_EXCEPTION
//


//
// MessageId: 0x00000057L (No symbolic name defined)
//
// MessageText:
//
//  XNS_INTERNAL_ERROR
//


//
// MessageId: 0x00000058L (No symbolic name defined)
//
// MessageText:
//
//  FTDISK_INTERNAL_ERROR
//


//
// MessageId: 0x00000059L (No symbolic name defined)
//
// MessageText:
//
//  PINBALL_FILE_SYSTEM
//


//
// MessageId: 0x0000005AL (No symbolic name defined)
//
// MessageText:
//
//  CRITICAL_SERVICE_FAILED
//


//
// MessageId: 0x0000005BL (No symbolic name defined)
//
// MessageText:
//
//  SET_ENV_VAR_FAILED
//


//
// MessageId: 0x0000005CL (No symbolic name defined)
//
// MessageText:
//
//  HAL_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000005DL (No symbolic name defined)
//
// MessageText:
//
//  UNSUPPORTED_PROCESSOR
//


//
// MessageId: 0x0000005EL (No symbolic name defined)
//
// MessageText:
//
//  OBJECT_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000005FL (No symbolic name defined)
//
// MessageText:
//
//  SECURITY_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000060L (No symbolic name defined)
//
// MessageText:
//
//  PROCESS_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000061L (No symbolic name defined)
//
// MessageText:
//
//  HAL1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000062L (No symbolic name defined)
//
// MessageText:
//
//  OBJECT1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000063L (No symbolic name defined)
//
// MessageText:
//
//  SECURITY1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000064L (No symbolic name defined)
//
// MessageText:
//
//  SYMBOLIC_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000065L (No symbolic name defined)
//
// MessageText:
//
//  MEMORY1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000066L (No symbolic name defined)
//
// MessageText:
//
//  CACHE_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000067L (No symbolic name defined)
//
// MessageText:
//
//  CONFIG_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000068L (No symbolic name defined)
//
// MessageText:
//
//  FILE_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000069L (No symbolic name defined)
//
// MessageText:
//
//  IO1_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006AL (No symbolic name defined)
//
// MessageText:
//
//  LPC_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006BL (No symbolic name defined)
//
// MessageText:
//
//  PROCESS1_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006CL (No symbolic name defined)
//
// MessageText:
//
//  REFMON_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006DL (No symbolic name defined)
//
// MessageText:
//
//  SESSION1_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006EL (No symbolic name defined)
//
// MessageText:
//
//  SESSION2_INITIALIZATION_FAILED
//


//
// MessageId: 0x0000006FL (No symbolic name defined)
//
// MessageText:
//
//  SESSION3_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000070L (No symbolic name defined)
//
// MessageText:
//
//  SESSION4_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000071L (No symbolic name defined)
//
// MessageText:
//
//  SESSION5_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000072L (No symbolic name defined)
//
// MessageText:
//
//  ASSIGN_DRIVE_LETTERS_FAILED
//


//
// MessageId: 0x00000073L (No symbolic name defined)
//
// MessageText:
//
//  CONFIG_LIST_FAILED
//


//
// MessageId: 0x00000074L (No symbolic name defined)
//
// MessageText:
//
//  BAD_SYSTEM_CONFIG_INFO
//


//
// MessageId: 0x00000075L (No symbolic name defined)
//
// MessageText:
//
//  CANNOT_WRITE_CONFIGURATION
//


//
// MessageId: 0x00000076L (No symbolic name defined)
//
// MessageText:
//
//  PROCESS_HAS_LOCKED_PAGES
//


//
// MessageId: 0x00000077L (No symbolic name defined)
//
// MessageText:
//
//  KERNEL_STACK_INPAGE_ERROR
//


//
// MessageId: 0x00000078L (No symbolic name defined)
//
// MessageText:
//
//  PHASE0_EXCEPTION
//


//
// MessageId: 0x00000079L (No symbolic name defined)
//
// MessageText:
//
//  Hay incompatibilidad entre la imagen del kernel y la capa de
//  abstracción del hardware.
//


//
// MessageId: 0x0000007AL (No symbolic name defined)
//
// MessageText:
//
//  KERNEL_DATA_INPAGE_ERROR
//


//
// MessageId: 0x0000007BL (No symbolic name defined)
//
// MessageText:
//
//  Verifica la presencia de virus en tu ordenador. Retira discos duros
//  o controladoresrecién instalados. Verifica la configuración y
//  terminación del disco duro. Ejecuta CHKDSK /F para buscar corrupción
//  en el disco y reinicia el sistema.
//


//
// MessageId: 0x0000007CL (No symbolic name defined)
//
// MessageText:
//
//  BUGCODE_NDIS_DRIVER
//


//
// MessageId: 0x0000007DL (No symbolic name defined)
//
// MessageText:
//
//  INSTALL_MORE_MEMORY
//


//
// MessageId: 0x0000007EL (No symbolic name defined)
//
// MessageText:
//
//  SYSTEM_THREAD_EXCEPTION_NOT_HANDLED
//


//
// MessageId: 0x0000007FL (No symbolic name defined)
//
// MessageText:
//
//  Utilice la herramienta de diagnóstico del sistema de su fabricante para
//  verificar y corregir problemas de memoria y video. 
//  
//  Desactive hardware, controladores o software recién instalados. Para 
//  hacerlo en Modo Seguro, reinicie, presione F8 y elija Modo Seguro.
//


//
// MessageId: 0x00000080L (No symbolic name defined)
//
// MessageText:
//
//  Hardware malfunction.
//


//
// MessageId: 0x00000081L (No symbolic name defined)
//
// MessageText:
//
//  SPIN_LOCK_INIT_FAILURE
//


//
// MessageId: 0x00000082L (No symbolic name defined)
//
// MessageText:
//
//  DFS_FILE_SYSTEM
//


//
// MessageId: 0x00000083L (No symbolic name defined)
//
// MessageText:
//
//  OFS_FILE_SYSTEM
//


//
// MessageId: 0x00000084L (No symbolic name defined)
//
// MessageText:
//
//  RECOM_DRIVER
//


//
// MessageId: 0x00000085L (No symbolic name defined)
//
// MessageText:
//
//  SETUP_FAILURE
//


//
// MessageId: 0x00000086L (No symbolic name defined)
//
// MessageText:
//
//  El intento de auditoría ha fracasado.
//


//
// MessageId: 0x0000008BL (No symbolic name defined)
//
// MessageText:
//
//  El sistema puede estar infectado con un virus.
//


//
// MessageId: 0x0000008EL (No symbolic name defined)
//
// MessageText:
//
//  KERNEL_MODE_EXCEPTION_NOT_HANDLED
//


//
// MessageId: 0x0000008FL (No symbolic name defined)
//
// MessageText:
//
//  PP0_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000090L (No symbolic name defined)
//
// MessageText:
//
//  PP1_INITIALIZATION_FAILED
//


//
// MessageId: 0x00000091L (No symbolic name defined)
//
// MessageText:
//
//  WIN32K_INIT_OR_RIT_FAILURE
//


//
// MessageId: 0x00000092L (No symbolic name defined)
//
// MessageText:
//
//  UP_DRIVER_ON_MP_SYSTEM
//


//
// MessageId: 0x00000093L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_KERNEL_HANDLE
//


//
// MessageId: 0x00000094L (No symbolic name defined)
//
// MessageText:
//
//  KERNEL_STACK_LOCKED_AT_EXIT
//


//
// MessageId: 0x00000095L (No symbolic name defined)
//
// MessageText:
//
//  PNP_INTERNAL_ERROR
//


//
// MessageId: 0x00000096L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_WORK_QUEUE_ITEM
//


//
// MessageId: 0x00000097L (No symbolic name defined)
//
// MessageText:
//
//  BOUND_IMAGE_UNSUPPORTED
//


//
// MessageId: 0x00000098L (No symbolic name defined)
//
// MessageText:
//
//  END_OF_NT_EVALUATION_PERIOD
//


//
// MessageId: 0x00000099L (No symbolic name defined)
//
// MessageText:
//
//  INVALID_REGION_OR_SEGMENT
//


//
// MessageId: 0x0000009AL (No symbolic name defined)
//
// MessageText:
//
//  SYSTEM_LICENSE_VIOLATION
//


//
// MessageId: 0x0000009BL (No symbolic name defined)
//
// MessageText:
//
//  UDFS_FILE_SYSTEM
//


//
// MessageId: 0x0000009CL (No symbolic name defined)
//
// MessageText:
//
//  MACHINE_CHECK_EXCEPTION
//


//
// MessageId: 0x0000009EL (No symbolic name defined)
//
// MessageText:
//
//  Componentes críticos del modo de usuario no superaron una verificación de salud.
//


//
// MessageId: 0x0000009FL (No symbolic name defined)
//
// MessageText:
//
//  DRIVER_POWER_STATE_FAILURE
//


//
// MessageId: 0x000000A0L (No symbolic name defined)
//
// MessageText:
//
//  INTERNAL_POWER_ERROR
//


//
// MessageId: 0x000000A1L (No symbolic name defined)
//
// MessageText:
//
//  Se ha detectado una inconsistencia en las estructuras internas del
//  controlador del bus PCI.
//


//
// MessageId: 0x000000A2L (No symbolic name defined)
//
// MessageText:
//
//  La verificación CRC en el rango de memoria ha fallado.
//


//
// MessageId: 0x000000A3L (No symbolic name defined)
//
// MessageText:
//
//  ACPI_DRIVER_INTERNAL
//


//
// MessageId: 0x000000A4L (No symbolic name defined)
//
// MessageText:
//
//  Inconsistencia interna al representar el almacenamiento 
//  estructurado NTFS como un archivo DOCFILE.
//


//
// MessageId: 0x000000A5L (No symbolic name defined)
//
// MessageText:
//
//  El BIOS de este sistema no cumple totalmente con ACPI. Ponte en contacto con 
//  el proveedor del sistema para obtener una actualización. Si no es posible conseguir 
//  un BIOS actualizado o el suministrado por el proveedor no es compatible con ACPI, 
//  desactiva ACPI durante la configuración en modo texto presionando la tecla F7 al 
//  instalar los controladores de almacenamiento. El sistema desactivar?ACPI sin 
//  notificación para permitirte continuar con la instalación.
//


//
// MessageId: 0x000000A6L (No symbolic name defined)
//
// MessageText:
//
//  FP_EMULATION_ERROR
//


//
// MessageId: 0x000000A7L (No symbolic name defined)
//
// MessageText:
//
//  BAD_EXHANDLE
//


//
// MessageId: 0x000000A8L (No symbolic name defined)
//
// MessageText:
//
//  El sistema est?arrancando en modo seguro - Servicios mínimos
//


//
// MessageId: 0x000000A9L (No symbolic name defined)
//
// MessageText:
//
//  El sistema est?arrancando en modo seguro - Servicios mínimos con red
//


//
// MessageId: 0x000000AAL (No symbolic name defined)
//
// MessageText:
//
//  El sistema est?arrancando en modo seguro - Directorio Servicios Reparación
//


//
// MessageId: 0x000000ABL (No symbolic name defined)
//
// MessageText:
//
//  SESSION_HAS_VALID_POOL_ON_EXIT
//


//
// MessageId: 0x000000ACL (No symbolic name defined)
//
// MessageText:
//
//  La asignación desde el pool no paginado fall?para una asignación crítica de HAL.
//


//
// MessageId: 0x000000B4L (No symbolic name defined)
//
// MessageText:
//
//  No se ha podido inicializar el controlador de vídeo.
//


//
// MessageId: 0x000000B5L (No symbolic name defined)
//
// MessageText:
//
//  Loaded driver
//


//
// MessageId: 0x000000B6L (No symbolic name defined)
//
// MessageText:
//
//  Did not load driver
//


//
// MessageId: 0x000000B7L (No symbolic name defined)
//
// MessageText:
//
//  Boot Logging Enabled
//


//
// MessageId: 0x000000B8L (No symbolic name defined)
//
// MessageText:
//
//  Se intent?realizar una operación de espera, adjuntar un proceso o ceder desde
//  una rutina de DPC (Llama de Procedimiento Diferido).
//


//
// MessageId: 0x000000B9L (No symbolic name defined)
//
// MessageText:
//
//  Se detect?un error de paridad en la memoria del sistema o en el sistema de E/S.
//


//
// MessageId: 0x000000BAL (No symbolic name defined)
//
// MessageText:
//
//  SESSION_HAS_VALID_VIEWS_ON_EXIT
//


//
// MessageId: 0x000000BBL (No symbolic name defined)
//
// MessageText:
//
//  Se ha producido un fallo de inicialización al intentar arrancar desde la red.
//


//
// MessageId: 0x000000BCL (No symbolic name defined)
//
// MessageText:
//
//  Se asign?una dirección IP duplicada a esta máquina al intentar arrancar 
//  desde la red.
//


//
// MessageId: 0x000000BDL (No symbolic name defined)
//
// MessageText:
//
//  La imagen de memoria hibernada no se corresponde con la configuración
//  actual del hardware.
//


//
// MessageId: 0x000000BEL (No symbolic name defined)
//
// MessageText:
//
//  Se intent?escribir en memoria de solo lectura.
//


//
// MessageId: 0x000000BFL (No symbolic name defined)
//
// MessageText:
//
//  MUTEX_ALREADY_OWNED
//


//
// MessageId: 0x000000C0L (No symbolic name defined)
//
// MessageText:
//
//  Ha fallado un intento de acceder al espacio de configuración PCI.
//


//
// MessageId: 0x000000C1L (No symbolic name defined)
//
// MessageText:
//
//  SPECIAL_POOL_DETECTED_MEMORY_CORRUPTION
//


//
// MessageId: 0x000000C2L (No symbolic name defined)
//
// MessageText:
//
//  BAD_POOL_CALLER
//


//
// MessageId: 0x000000C3L (No symbolic name defined)
//
// MessageText:
//
//  
//  A system file that is owned by Windows was replaced by an application
//  running on your system.  The operating system detected this and tried to
//  verify the validity of the file's signature.  The operating system found that
//  the file signature is not valid and put the original, correct file back
//  so that your operating system will continue to function properly.
//


//
// MessageId: 0x000000C4L (No symbolic name defined)
//
// MessageText:
//
//  
//  Se ha detectado un controlador de dispositivo intentando corromper
//  el sistema. El controlador defectuoso que est?actualmente en la
//  pila del kernel debe ser reemplazado por una versión que funcione.
//


//
// MessageId: 0x000000C5L (No symbolic name defined)
//
// MessageText:
//
//  Un controlador de dispositivo tiene una reserva de memoria.
//  
//  Verifique la instalación adecuada de hardware o software nuevo y
//  consulte con el fabricante para posibles actualizaciones de Windows
//  si es una instalación nueva.
//  
//  
//  Ejecute el verificador de controladores contra cualquier controlador nuevo
//  (o sospechoso). Si eso no revela el controlador corrupto, intente habilitar
//  el pool especial. Ambas características están diseñadas para detectar la
//  corrupción en un punto anterior donde se puede identificar el controlador
//  problemático.
//  
//  Reinicie y seleccione Modo Seguro con F8 para quitar o desactivar
//  componentes si necesitas.
//


//
// MessageId: 0x000000C6L (No symbolic name defined)
//
// MessageText:
//
//  
//  Se ha detectado un controlador de dispositivo intentando corromper
//  el sistema. El controlador defectuoso que est?actualmente en la
//  pila del kernel debe ser reemplazado por una versión que funcione.
//


//
// MessageId: 0x000000C7L (No symbolic name defined)
//
// MessageText:
//
//  
//  Se encontr?un temporizador de kernel o DPC en la memoria que no debería contener tales
//  elementos. Por lo general, esto es memoria que se est?liberando. Esto suele ser causado
//  por un controlador de dispositivo que no se ha limpiado adecuadamente antes de liberar
//  la memoria.
//


//
// MessageId: 0x000000C8L (No symbolic name defined)
//
// MessageText:
//
//  El IRQL del procesador no es válido para el contexto actual de ejecución. 
//  Esto es una condición de error de software y suele ser causada por un 
//  controlador de dispositivo que cambia el IRQL y no lo restablece a su 
//  valor anterior al completar su tarea.
//


//
// MessageId: 0x000000C9L (No symbolic name defined)
//
// MessageText:
//
//  
//  El administrador de E/S ha detectado una violación por parte de un controlador
//  que est?siendo verificado. El controlador defectuoso que se est?verificando
//  debe ser depurado y reemplazado con una versión funcional.
//


//
// MessageId: 0x000000CAL (No symbolic name defined)
//
// MessageText:
//
//  
//  Plug and Play detect?un error probablemente causado por un controlador
//  defectuoso.
//


//
// MessageId: 0x000000CBL (No symbolic name defined)
//
// MessageText:
//
//  DRIVER_LEFT_LOCKED_PAGES_IN_PROCESS
//


//
// MessageId: 0x000000CCL (No symbolic name defined)
//
// MessageText:
//
//  
//  El sistema est?intentando acceder a la memoria después de haber sido liberada.
//  Esto suele indicar un problema de sincronización entre el sistema y el controlador.
//


//
// MessageId: 0x000000CDL (No symbolic name defined)
//
// MessageText:
//
//  
//  El sistema est?intentando acceder a la memoria más all?del final de la asignación.
//  Esto suele indicar un problema de sincronización entre el sistema y el controlador.
//


//
// MessageId: 0x000000CEL (No symbolic name defined)
//
// MessageText:
//
//  DRIVER_UNLOADED_WITHOUT_CANCELLING_PENDING_OPERATIONS
//


//
// MessageId: 0x000000CFL (No symbolic name defined)
//
// MessageText:
//
//  TERMINAL_SERVER_DRIVER_MADE_INCORRECT_MEMORY_REFERENCE
//


//
// MessageId: 0x000000D0L (No symbolic name defined)
//
// MessageText:
//
//  DRIVER_CORRUPTED_MMPOOL
//


//
// MessageId: 0x000000D1L (No symbolic name defined)
//
// MessageText:
//
//  DRIVER_IRQL_NOT_LESS_OR_EQUAL
//


//
// MessageId: 0x000000D3L (No symbolic name defined)
//
// MessageText:
//
//  El controlador cometi?un error al marcar una parte de su imagen como paginable
//  en lugar de no paginable.
//


//
// MessageId: 0x000000D4L (No symbolic name defined)
//
// MessageText:
//
//  El controlador se ha descargado sin cancelar las operaciones pendientes.
//


//
// MessageId: 0x000000D5L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador est?intentando acceder a memoria más all?del final de la asignación.
//


//
// MessageId: 0x000000D6L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador est?intentando acceder a memoria más all?del final de la asignación.
//


//
// MessageId: 0x000000D7L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador est?intentando desvincular una dirección de memoria no válida.
//


//
// MessageId: 0x000000D8L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador ha utilizado un número excesivo de PTEs del sistema.
//


//
// MessageId: 0x000000D9L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador est?corrompiendo las estructuras de seguimiento de páginas bloqueadas.
//


//
// MessageId: 0x000000DAL (No symbolic name defined)
//
// MessageText:
//
//  
//  El conductor est?gestionando mal los PTE del sistema.
//


//
// MessageId: 0x000000DBL (No symbolic name defined)
//
// MessageText:
//
//  
//  Un controlador ha corrompido los PTE del sistema de gestión de memoria.
//


//
// MessageId: 0x000000DCL (No symbolic name defined)
//
// MessageText:
//
//  
//  Un conductor accedi?a una dirección de pila que se encuentra por debajo 
//  del puntero de pila actual del hilo de la pila.
//


//
// MessageId: 0x000000DEL (No symbolic name defined)
//
// MessageText:
//
//  
//  Un controlador corrompi?la memoria de la agrupación usada para contener páginas
//  destinadas al disco.
//


//
// MessageId: 0x000000DFL (No symbolic name defined)
//
// MessageText:
//
//  
//  Un hilo de trabajo est?suplantando a otro proceso. El elemento de
//  trabajo olvid?desactivar la suplantación antes de regresar.
//


//
// MessageId: 0x000000E0L (No symbolic name defined)
//
// MessageText:
//
//  La BIOS de tu ordenador ha informado que hay un componente defectuoso en tu sistema 
//  y ha impedido que Windows funcione. Puedes determinar qu?componente est?defectuoso 
//  ejecutando el disco o la herramienta de diagnóstico que venía con tu computadora.
//  
//  Si no cuentas con esta herramienta, debes ponerte en contacto con tu proveedor
//  de sistemas y comunicarles este mensaje de error. Ellos podrán ayudarte a
//  corregir este problema de hardware para que Windows funcione correctamente.
//


//
// MessageId: 0x000000E1L (No symbolic name defined)
//
// MessageText:
//
//  WORKER_THREAD_RETURNED_AT_BAD_IRQL
//


//
// MessageId: 0x000000E2L (No symbolic name defined)
//
// MessageText:
//
//  
//  El usuario final gener?manualmente el crashdump.
//


//
// MessageId: 0x000000E3L (No symbolic name defined)
//
// MessageText:
//
//  
//  Hay un hilo que intent?liberar un recurso que no poseía.
//


//
// MessageId: 0x000000E4L (No symbolic name defined)
//
// MessageText:
//
//  
//  If Parameter1 == 0, an executive worker item was found in memory which
//  must not contain such items.  Usually this is memory being freed.  This
//  is usually caused by a device driver that has not cleaned up properly
//  before freeing memory.
//  
//  If Parameter1 == 1, an attempt was made to queue an executive worker item
//  with a usermode execution routine.
//


//
// MessageId: 0x000000E5L (No symbolic name defined)
//
// MessageText:
//
//  POWER_FAILURE_SIMULATE
//


//
// MessageId: 0x000000E6L (No symbolic name defined)
//
// MessageText:
//
//  
//  El subsistema DMA detect?una operación DMA ilegal provocada por un
//  controlador en verificación. Es necesario reemplazar el controlador
//  defectuoso por uno que funcione.
//


//
// MessageId: 0x000000E7L (No symbolic name defined)
//
// MessageText:
//
//  
//  Al restaurar el estado de punto flotante de un hilo, se detect?que el
//  estado era inválido.
//


//
// MessageId: 0x000000E8L (No symbolic name defined)
//
// MessageText:
//
//  
//  The fileobject passed to IoCancelFileOpen is invalid. It should have reference of 1. The driver
//  that called IoCancelFileOpen is at fault.
//


//
// MessageId: 0x000000E9L (No symbolic name defined)
//
// MessageText:
//
//  Un hilo de trabajo ejecutivo est?siendo terminado sin haber pasado por el código de resumen
//  del hilo de trabajo.
//  Los elementos de trabajo encolados en la cola de ex trabajadores no deben terminar sus hilos.
//  Una traza de pila debería indicar al culpable.
//


//
// MessageId: 0x000000EAL (No symbolic name defined)
//
// MessageText:
//
//  
//  Un controlador de dispositivo est?girando en un bucle infinito. Esto suele 
//  indicar un problema con el propio hardware o con el controlador de dispositivo
//  que programa el hardware incorrectamente.
//  
//  Por favor, consulta con el proveedor de tu dispositivo de hardware para 
//  posibles reparaciones o actualizaciones de controladores.
//


//
// MessageId: 0x000000EBL (No symbolic name defined)
//
// MessageText:
//
//  
//  La pila de controladores del sistema de archivos ha quedada bloqueado y
//  todas las páginas modificadas están destinadas al sistema de archivos.
//  Dado que el sistema de archivos no est?operativo, el sistema ha fallado
//  porque no se pueden reutilizar ninguna de las páginas modificadas sin
//  perder datos. Cualquier controlador de sistema de archivos o filtro en
//  el conjunto puede ser el responsable.
//


//
// MessageId: 0x000000ECL (No symbolic name defined)
//
// MessageText:
//
//  SESSION_HAS_VALID_SPECIAL_POOL_ON_EXIT
//


//
// MessageId: 0x000000EDL (No symbolic name defined)
//
// MessageText:
//
//  UNMOUNTABLE_BOOT_VOLUME
//


//
// MessageId: 0x000000EFL (No symbolic name defined)
//
// MessageText:
//
//  
//  El kernel intent?preparar un hilo que se encontraba en un estado incorrecto, 
//  como terminado.
//


//
// MessageId: 0x000000F1L (No symbolic name defined)
//
// MessageText:
//
//  El verificador SCSI ha detectado un error en un controlador de minipuerto 
//  SCSI que se est?verificando.
//


//
// MessageId: 0x000000F2L (No symbolic name defined)
//
// MessageText:
//
//  Una tormenta de interrupciones ha causado que el sistema se quede colgado.
//


//
// MessageId: 0x000000F3L (No symbolic name defined)
//
// MessageText:
//
//  El sistema no se apaga de manera determinista, lo que puede provocar errores de bloqueo.
//


//
// MessageId: 0x000000F4L (No symbolic name defined)
//
// MessageText:
//
//  Un proceso o hilo crucial para la operación del sistema ha salido o sido
//  terminado inesperadamente.
//


//
// MessageId: 0x000000F5L (No symbolic name defined)
//
// MessageText:
//
//  FLTMGR_FILE_SYSTEM
//


//
// MessageId: 0x000000F6L (No symbolic name defined)
//
// MessageText:
//
//  
//  El controlador PCI ha detectado un error durante la verificación de un
//  dispositivo PCI o de la BIOS.
//


//
// MessageId: 0x000000F7L (No symbolic name defined)
//
// MessageText:
//
//  Un controlador ha sobrepasado un búfer basado en pila. Este sobrepaso podría potencialmente
//  permitir a un usuario malintencionado tomar el control de esta máquina.
//


//
// MessageId: 0x000000F8L (No symbolic name defined)
//
// MessageText:
//
//  Se ha producido un fallo de inicialización al intentar arrancar desde el disco RAM.
//


//
// MessageId: 0x000000F9L (No symbolic name defined)
//
// MessageText:
//
//  Un controlador devolvi?STATUS_REPARSE a una solicitud de Crear sin nombres 
//  adicionales. STATUS_REPARSE debería devolverse únicamente para solicitudes
//  de Crear con nombres adicionales, ya que eso indica que el controlador
//  est?admitiendo espacios de nombres.
//


//
// MessageId: 0x000000FAL (No symbolic name defined)
//
// MessageText:
//
//  El módulo del kernel HTTP ha alcanzado un estado corrupto y no puede recuperarse.
//  Esto significa que el módulo HTTP detect?que sus datos privados están corruptos,
//  lo que suele resultar en la corrupción eventual del grupo de hilos y una 
//  violación de acceso.
//


//
// MessageId: 0x000000FBL (No symbolic name defined)
//
// MessageText:
//
//  Ocurri?una excepción de verificación de la máquina justo después de procesar una 
//  previa, pero antes de completar la salida del código de verificación de la máquina.
//


//
// MessageId: 0x000000FCL (No symbolic name defined)
//
// MessageText:
//
//  Se intent?ejecutar la memoria no ejecutable.
//


//
// MessageId: 0x000000FDL (No symbolic name defined)
//
// MessageText:
//
//  El componente que posee las páginas modificadas sin escribir no pudo
//  escribir estas páginas después de marcar los archivos relevantes como
//  no escribibles para la gestión de memoria. Esto indica un error en el controlador.
//


//
// MessageId: 0x000000FEL (No symbolic name defined)
//
// MessageText:
//
//  BUGCODE_USB_DRIVER
//


//
// MessageId: 0x00000104L (No symbolic name defined)
//
// MessageText:
//
//  Se ha detectado un acceso no válido a la memoria AGP.
//


//
// MessageId: 0x00000105L (No symbolic name defined)
//
// MessageText:
//
//  La tabla de redirección de apertura de gráficos est?dañada.
//


//
// MessageId: 0x00000106L (No symbolic name defined)
//
// MessageText:
//
//  El hardware AGP fue reprogramado sin autorización.
//


//
// MessageId: 0x00000107L (No symbolic name defined)
//
// MessageText:
//
//  Un hilo est?finalizando o intentando una llamada de Win32 con una pila ampliada.
//


//
// MessageId: 0x00000108L (No symbolic name defined)
//
// MessageText:
//
//  Un sistema de archivos de terceros o su filtro fall?de forma irrecuperable.
//


//
// MessageId: 0x00000109L (No symbolic name defined)
//
// MessageText:
//
//  Se detect?una modificación en el código del sistema o en una estructura de datos
//  crucial.
//


//
// MessageId: 0x00000111L (No symbolic name defined)
//
// MessageText:
//
//  Se produjo una interrupción no enmascarable justo después de procesar una interrupción no
//  enmascarable anterior, pero antes de que se completara la salida de la interrupción no
//  enmascarable.
//


//
// MessageId: 0x4000007EL (No symbolic name defined)
//
// MessageText:
//
//  Microsoft (R) Windows (R) Version %hs (Build %u%hs)
//


//
// MessageId: 0x4000007FL (No symbolic name defined)
//
// MessageText:
//
//  Se ha detectado un error y Windows se apag?para evitar daños en el ordenador.
//


//
// MessageId: 0x40000080L (No symbolic name defined)
//
// MessageText:
//
//  El problema parece estar causado por el siguiente archivo:
//  
//


//
// MessageId: 0x40000081L (No symbolic name defined)
//
// MessageText:
//
//  Si es la primera vez que ves esta pantalla de error de detención,
//  reinicia tu ordenador. Si esta pantalla vuelve a aparecer, 
//  sigue estos pasos:
//  
//


//
// MessageId: 0x40000082L (No symbolic name defined)
//
// MessageText:
//
//  Verifica que cualquier hardware o software nuevo est?instalado correctamente. 
//  Si es una instalación nueva, consulta a tu fabricante de hardware o software 
//  para obtener las actualizaciones de Windows que puedas necesitar.
//  
//  Ante problemas persistentes, desactiva hardware o software recién instalado. 
//  Deshabilita las opciones de memoria BIOS como el almacenamiento en cach?o el 
//  sombreado. Para deshabilitar componentes, reinicia tu ordenador en Modo Seguro
//  presionando F8 durante el arranque.
//


//
// MessageId: 0x40000083L (No symbolic name defined)
//
// MessageText:
//
//  La información técnica:
//


//
// MessageId: 0x40000087L (No symbolic name defined)
//
// MessageText:
//
//  Service Pack
//


//
// MessageId: 0x40000088L (No symbolic name defined)
//
// MessageText:
//
//  %u System Processor [%u MB Memory] %Z
//


//
// MessageId: 0x40000089L (No symbolic name defined)
//
// MessageText:
//
//  MultiProcessor Kernel
//


//
// MessageId: 0x4000008AL (No symbolic name defined)
//
// MessageText:
//
//  Un hilo del kernel ha terminado mientras mantenía un mutex.
//


//
// MessageId: 0x4000008BL (No symbolic name defined)
//
// MessageText:
//
//  Empezando a volcar de memoria física
//


//
// MessageId: 0x4000008CL (No symbolic name defined)
//
// MessageText:
//
//  Volcando de memoria física a disco
//


//
// MessageId: 0x4000008DL (No symbolic name defined)
//
// MessageText:
//
//  Volcado de memoria física completado.
//  Póngase en contacto con el administrador del sistema o con el grupo de
//  soporte técnico para obtener más asistencia.
//


//
// MessageId: 0x4000009DL (No symbolic name defined)
//
// MessageText:
//
//  %u System Processors [%u MB Memory] %Z
//


//
// MessageId: 0x4000009EL (No symbolic name defined)
//
// MessageText:
//
//  RC
//


//
// MessageId: 0x40010001L (No symbolic name defined)
//
// MessageText:
//
//  Undocked Profile
//


//
// MessageId: 0x40010002L (No symbolic name defined)
//
// MessageText:
//
//  Docked Profile
//


//
// MessageId: 0x40010003L (No symbolic name defined)
//
// MessageText:
//
//  Profile
//


