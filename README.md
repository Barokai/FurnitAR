>Lieber Herr Knittl-Frank,
>
>von der Idee her passt das soweit, Sie könnten auch z.B. mit mehreren Katalogen arbeiten und dort Varianten triggern z.B. über die Nähe oder Virtual Buttons. Z.B. eine Holztabelle oder Katalog in Kombination mit einem Möbelkatalog. Wichtig ist, dass sie auf die entsprechenden LoC kommen.
>
>Wenn Probleme mit der Entwicklung auftauchen sollten kommen sie bitte auf mich zu!
>
>Beste Grüße,
>Christoph Anthes

-----------------------------------------------------------------------
>>Guten Tag Herr Anthes,
>>
>>wie gewünscht eine kurze Beschreibung meiner Projektidee für AUG:
>>
>>Plan ist es, einen Einrichtungsplaner/Dekoplaner zu erstellen.
>>Ein mit Markern ausgestatteter Katalog (oder einzelne Zettel) ermöglicht die Auswahl von 3D Objekten wie Möbel oder Pflanzen welche dann im Raum platziert werden können.
>>Erweiterungsidee wäre, eine AR UI zu schaffen welche Eigenschaften des gewählten Objekts beeinflusst (Farbe, Größe).
​
>>Ich hoffe die Idee ist so machbar, bzw. bitte ich um Feedback, vielen Dank im Voraus.
>>
>>Beste Grüße,
>>Peter

# Setup

Download vuforia packages and place it in /Packages/ folder
https://1drv.ms/u/s!AufoJNRhqarVo8MesX2BMsDDa5nxmw?e=jxgBeO


# TODO

1) katalog 3d modelle
1) gui für auswahl von modell
1) platzierung (plane finder?)
1) rotation?
1) farbe?
1) neues modell?
1) speicher? screenshot? teilen?
1) menü

## notizen

- imagetarget erkennung und gui anzeigen: funktioniert noch nicht
- links oder rechts oben eine anzeige der gesamtkosten einfügen (3 möbel = 1200€ zB)
  - direkt auf AR camera geben das script?
- links oben im debug mode einen button zum platzieren eines sessels im Raum
  - direkt auf AR camera geben das script?
Ground plane stage rausfinden wie die funktioniert.
  - evtl abhängig je nach gerät ein marker nötig
  - testen mit pixel6, sollte keinen benötigen