using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.scripts
{
    public static class Globals
    {
        public static Dictionary<GameObject, decimal> FunitureWithPrices = new Dictionary<GameObject, decimal>();

        public static Material ChosenMaterial;
        public static GameObject ChosenFurniture;

        public static decimal ChosenMaterialCost = 0m;
        public static decimal ChosenFurnitureCost = 0m;

        public static decimal TotalAmount = 0m;
    }
}
