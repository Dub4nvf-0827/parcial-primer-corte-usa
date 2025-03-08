#Inicio
print("Welcome to COD damage calculator, the materials are as following: Wood = 1, Metal = 2, Concrete = 3. If you don't know the material, type 0")

try:
    indmg = float(input("Enter base damage: "))
    mats = int(input("Enter material type (1, 2, 3, or 0): "))

    if mats not in (1, 2, 3, 0):
        print("Error: Invalid material type. If you don't know the material, type 0.")
    else:
        if mats == 1:
            resdmg = indmg - (0.3 * indmg)
        elif mats == 2:
            resdmg = indmg - (0.5 * indmg)
        elif mats == 3:
            resdmg = indmg - (0.7 * indmg)
        elif mats == 0:
            dealt_dmg = float(input("Enter the damage dealt after reduction: "))
            reduction_percent = (1 - (dealt_dmg / indmg)) * 100
            
            if reduction_percent == 30:
                material = "Wood"
            elif reduction_percent == 50:
                material = "Metal"
            elif reduction_percent == 70:
                material = "Concrete"
            else:
                material = "Unknown"

            print(f"The material is: {material}")
            resdmg = dealt_dmg

        print(f"Resulting damage: {resdmg}")

except ValueError:
    print("Error: Please enter numeric values for damage and material type.")
