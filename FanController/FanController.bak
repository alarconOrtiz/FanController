EESchema Schematic File Version 4
LIBS:FanController-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "controlador de ventalador wifi"
Date "2020-03-14"
Rev ""
Comp "atka desing"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Notes 1500 4000 0    50   ~ 0
Conectores de entrada y salida\n
Text GLabel 2000 1800 0    50   Input ~ 0
220AC
Text GLabel 2000 2250 0    50   Input ~ 0
Neutro
$Comp
L Device:R R1
U 1 1 5ECD00D2
P 2650 1450
F 0 "R1" H 2720 1496 50  0000 L CNN
F 1 "47K" H 2720 1405 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2580 1450 50  0001 C CNN
F 3 "~" H 2650 1450 50  0001 C CNN
	1    2650 1450
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R4
U 1 1 5ECD0D61
P 2150 2450
F 0 "R4" H 2220 2496 50  0000 L CNN
F 1 "47K" H 2220 2405 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2080 2450 50  0001 C CNN
F 3 "~" H 2150 2450 50  0001 C CNN
	1    2150 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 2600 2150 2600
$Comp
L Device:R R5
U 1 1 5ECDD044
P 4750 2800
F 0 "R5" H 4820 2846 50  0000 L CNN
F 1 "1K" H 4820 2755 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4680 2800 50  0001 C CNN
F 3 "~" H 4750 2800 50  0001 C CNN
	1    4750 2800
	1    0    0    -1  
$EndComp
Text GLabel 4750 3100 3    50   Input ~ 0
GND_3V3
Wire Wire Line
	4750 3100 4750 2950
Wire Notes Line
	1400 1200 1400 3700
Wire Notes Line
	1400 3700 5500 3700
Wire Notes Line
	5500 3700 5500 1200
Wire Notes Line
	5500 1200 1400 1200
Text Notes 1450 1150 0    50   ~ 0
Entrada AC y conversion a sinosoudal de baja tensión\n
Wire Wire Line
	3550 1950 3550 2450
Wire Wire Line
	3250 1450 3250 1650
$Comp
L Diode_Bridge:KBU4A D1
U 1 1 5ED38131
P 3250 1950
F 0 "D1" H 3594 1996 50  0000 L CNN
F 1 "KBL10" H 3594 1905 50  0000 L CNN
F 2 "Open kicad:kbl10" H 3400 2075 50  0001 L CNN
F 3 "http://www.vishay.com/docs/88656/kbu4.pdf" H 3250 1950 50  0001 C CNN
	1    3250 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 1950 2950 2650
Wire Wire Line
	4000 2650 2950 2650
Wire Wire Line
	3550 2450 4000 2450
$Comp
L Relay_SolidState:MOC3020M U2
U 1 1 5ED44CC6
P 4300 2550
F 0 "U2" H 4300 2875 50  0000 C CNN
F 1 "EL817" H 4300 2784 50  0000 C CNN
F 2 "Package_DIP:DIP-4_W7.62mm" H 4100 2350 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/MO/MOC3020M.pdf" H 4275 2550 50  0001 L CNN
	1    4300 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 1800 2150 1800
Wire Wire Line
	4600 2650 4750 2650
Connection ~ 4750 2650
Wire Wire Line
	4750 2650 4900 2650
Text GLabel 4600 2450 2    50   Input ~ 0
3V3
Text GLabel 4900 2650 2    50   Input ~ 0
ADC
$Comp
L Device:Varistor RV1
U 1 1 5ED798EB
P 2150 2000
F 0 "RV1" H 2253 2046 50  0000 L CNN
F 1 "Varistor" H 2253 1955 50  0000 L CNN
F 2 "Varistor:RV_Disc_D7mm_W3.4mm_P5mm" V 2080 2000 50  0001 C CNN
F 3 "~" H 2150 2000 50  0001 C CNN
	1    2150 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2150 1800 2150 1850
$Comp
L Device:Fuse F1
U 1 1 5ED7F888
P 2150 1650
F 0 "F1" H 2210 1696 50  0000 L CNN
F 1 "Fuse" H 2210 1605 50  0000 L CNN
F 2 "Fuse:Fuse_SunFuse-6HP" V 2080 1650 50  0001 C CNN
F 3 "~" H 2150 1650 50  0001 C CNN
	1    2150 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 2250 3250 2600
Wire Wire Line
	2150 1500 2150 1450
Wire Wire Line
	2150 1450 2500 1450
Wire Wire Line
	2800 1450 3250 1450
Wire Notes Line
	10550 3400 10550 1200
Wire Notes Line
	10550 1200 6400 1200
Wire Notes Line
	6400 1200 6400 3400
Text Notes 6550 1150 0    50   ~ 0
Activar fase\n
Wire Notes Line
	6400 3400 10550 3400
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 5ED88B7D
P 2300 4550
F 0 "J1" H 2380 4542 50  0000 L CNN
F 1 "Conn_01x02" H 2380 4451 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2_1x02_P5.00mm_Horizontal" H 2300 4550 50  0001 C CNN
F 3 "~" H 2300 4550 50  0001 C CNN
	1    2300 4550
	1    0    0    -1  
$EndComp
Text GLabel 2100 4550 0    50   Input ~ 0
220AC
Text GLabel 2100 4650 0    50   Input ~ 0
Neutro
Wire Wire Line
	2000 2250 2150 2250
Wire Wire Line
	2150 2250 2150 2300
Wire Wire Line
	2150 2150 2150 2250
Connection ~ 2150 2250
$Comp
L Device:R R3
U 1 1 5ED8E1B7
P 8550 2000
F 0 "R3" V 8343 2000 50  0000 C CNN
F 1 "200" V 8434 2000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 8480 2000 50  0001 C CNN
F 3 "~" H 8550 2000 50  0001 C CNN
	1    8550 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	7400 2000 7600 2000
Text GLabel 7600 2400 3    50   Input ~ 0
GND_3V3
Wire Wire Line
	7600 2400 7600 2200
Text GLabel 8850 2000 2    50   Input ~ 0
220AC
Wire Wire Line
	8700 2000 8743 2000
$Comp
L Triac_Thyristor:BT136-500 Q1
U 1 1 5ED9658E
P 8700 2150
F 0 "Q1" H 8871 2162 50  0000 L CNN
F 1 "BTA16" H 8871 2071 50  0000 L CNN
F 2 "Open kicad:TO-220AB" H 8943 2041 50  0001 L CIN
F 3 "http://www.micropik.com/PDF/BT136-600.pdf" H 8743 2116 50  0001 L CNN
	1    8700 2150
	1    0    0    -1  
$EndComp
Text Notes 6850 1700 0    50   ~ 0
Necesito recalcularlo para 3,3 y no 5
Text Notes 4950 2550 0    50   ~ 0
zero_crossing
Wire Wire Line
	8200 2000 8400 2000
$Comp
L Relay_SolidState:MOC3020M U1
U 1 1 5ED8C547
P 7900 2100
F 0 "U1" H 7900 2425 50  0000 C CNN
F 1 "MOC3020" H 7900 2334 50  0000 C CNN
F 2 "Package_DIP:DIP-6_W7.62mm" H 7700 1900 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/MO/MOC3020M.pdf" H 7875 2100 50  0001 L CNN
	1    7900 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	8743 2034 8743 2000
Connection ~ 8743 2000
Wire Wire Line
	8743 2000 8850 2000
Wire Wire Line
	8200 2200 8593 2200
Wire Wire Line
	8593 2200 8593 2284
Text GLabel 8743 2334 3    50   Input ~ 0
Fase_out
$Comp
L Connector_Generic:Conn_01x02 J3
U 1 1 5EDAB3AB
P 2300 5050
F 0 "J3" H 2380 5042 50  0000 L CNN
F 1 "Conn_01x02" H 2380 4951 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2_1x02_P5.00mm_Horizontal" H 2300 5050 50  0001 C CNN
F 3 "~" H 2300 5050 50  0001 C CNN
	1    2300 5050
	1    0    0    -1  
$EndComp
Text GLabel 2100 5150 0    50   Input ~ 0
Neutro
Text GLabel 2100 5050 0    50   Input ~ 0
Fase_out
$Comp
L ESP3286:NodeMCU1.0(ESP-12E) U3
U 1 1 5EC968D0
P 8300 5000
F 0 "U3" H 8300 6087 60  0000 C CNN
F 1 "NodeMCU1.0(ESP-12E)" H 8300 5981 60  0000 C CNN
F 2 "ESP3288:NodeMCU1.0(12-E)" H 8350 4000 60  0000 C CNN
F 3 "" H 7700 4150 60  0000 C CNN
	1    8300 5000
	1    0    0    -1  
$EndComp
Text GLabel 9100 5600 2    50   Input ~ 0
GND_3V3
Text GLabel 9100 5700 2    50   Input ~ 0
3V3
Text GLabel 7500 5200 0    50   Input ~ 0
GND_3V3
Text GLabel 7500 5300 0    50   Input ~ 0
3V3
Text GLabel 9100 4900 2    50   Input ~ 0
GND_3V3
Text GLabel 9100 4800 2    50   Input ~ 0
3V3
Text GLabel 7500 4300 0    50   Input ~ 0
ADC
$Comp
L Device:LED D2
U 1 1 5ECA6A6E
P 10050 4800
F 0 "D2" V 10089 4683 50  0000 R CNN
F 1 "LED" V 9998 4683 50  0000 R CNN
F 2 "LED_THT:LED_D2.0mm_W4.8mm_H2.5mm_FlatTop" H 10050 4800 50  0001 C CNN
F 3 "~" H 10050 4800 50  0001 C CNN
	1    10050 4800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	10050 4650 10050 4400
Wire Wire Line
	10050 4400 9100 4400
Text GLabel 10050 4950 3    50   Input ~ 0
GND_3V3
$Comp
L Device:R R2
U 1 1 5ED8CCE9
P 7250 2000
F 0 "R2" V 7043 2000 50  0000 C CNN
F 1 "100" V 7134 2000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 7180 2000 50  0001 C CNN
F 3 "~" H 7250 2000 50  0001 C CNN
	1    7250 2000
	0    1    1    0   
$EndComp
Text GLabel 7100 2000 0    50   Input ~ 0
fase_flag
Text GLabel 9100 4300 2    50   Input ~ 0
fase_flag
NoConn ~ 9100 4500
NoConn ~ 9100 4600
NoConn ~ 9100 4700
NoConn ~ 9100 5000
NoConn ~ 9100 5100
NoConn ~ 9100 5200
NoConn ~ 9100 5300
NoConn ~ 9100 5400
NoConn ~ 9100 5500
NoConn ~ 7500 5400
NoConn ~ 7500 5500
NoConn ~ 7500 4400
NoConn ~ 7500 4500
NoConn ~ 7500 4600
NoConn ~ 7500 4700
NoConn ~ 7500 4800
NoConn ~ 7500 4900
NoConn ~ 7500 5000
NoConn ~ 7500 5100
Text GLabel 5050 4350 2    50   Input ~ 0
VDD
Text GLabel 5050 4550 2    50   Input ~ 0
GND_VDD
Text GLabel 7500 5700 0    50   Input ~ 0
VDD
Text GLabel 7500 5600 0    50   Input ~ 0
GND_VDD
Wire Notes Line
	1350 5350 3400 5350
Wire Notes Line
	3400 4050 1350 4050
$Comp
L Converter_ACDC:HLK-PM03 PS?
U 1 1 5F2C88CC
P 4650 4450
F 0 "PS?" H 4650 4775 50  0000 C CNN
F 1 "HLK-PM03" H 4650 4684 50  0000 C CNN
F 2 "Converter_ACDC:Converter_ACDC_HiLink_HLK-PMxx" H 4650 4150 50  0001 C CNN
F 3 "http://www.hlktech.net/product_detail.php?ProId=59" H 5050 4100 50  0001 C CNN
	1    4650 4450
	1    0    0    -1  
$EndComp
Text GLabel 4250 4350 0    50   Input ~ 0
220AC
Text GLabel 4250 4550 0    50   Input ~ 0
Neutro
Wire Notes Line
	3400 4050 3400 5350
Wire Notes Line
	3850 4050 3850 5350
Wire Notes Line
	3850 5350 6050 5350
Wire Notes Line
	6050 5350 6050 4050
Wire Notes Line
	6050 4050 3850 4050
Text Notes 3950 4000 0    50   ~ 0
Fuente de alimentación ESP12E\n
Text Notes 4100 4950 0    50   ~ 0
nota: Faltan filtrar la salida y añadir proteccion.
Wire Notes Line
	1350 4050 1350 5350
$EndSCHEMATC
