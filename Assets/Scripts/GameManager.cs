using System;
using System.Collections.Generic;
using UnityEngine;

namespace Assets.scripts
{
    public static class GameManager
    {
        public static List<Tuple<string, decimal>> FunitureWithPrices = new List<Tuple<string, decimal>>();

        public static Material ChosenMaterial;
        public static GameObject ChosenFurniture;
        public static Quaternion ModelToPlaceRotation;

        public static decimal ChosenMaterialCost = 0m;
        public static decimal ChosenFurnitureCost = 0m;

        public static decimal TotalAmount = 0m;

        public static string ChooseMaterialHint => ChosenMaterial != null ? string.Empty : "choose material";
        public static string ChooseFurnitureHint => ChosenFurniture != null ? string.Empty : "choose model";
    }
}
