#Massa de Combustivel ECU Flex

#variaveis
vol_ef = 1        #efeciencia volumetrica
air_press = 1     #pressão do ar
vol = 1           # volume
mol_mass = 1      #
gases = 1         #constante geral dos gases
air_t = 1         #
n_cyl = 1         #numero de cilindros

#calculo 
air_mass = ((vol_ef)*(air_press)*(vol)*(mol_mass))/(gases*air_t*n_cyl)

print (air_mass)

#calculo escrito na ECU
air_mass2 = (((air_press)*(mol_mass))/(gases*air_t)) * ((vol_ef)*(vol)/n_cyl)

print (air_mass2)



