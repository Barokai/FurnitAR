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

# Setup (probably solved with using git lfs for this file)

Download vuforia package and place it in /Packages/ folder

- vuforia 10.6.3
<https://1drv.ms/u/s!AufoJNRhqarVo_ZK56pDWrkrjs9q2g?e=bc7O3B>

# Huge thanks

to <https://assetstore.unity.com/packages/3d/props/furniture/big-furniture-pack-7717>

# Feature list

1) Previewing models via rotation on imagetarget
1) Choosing models via imagetarget
1) Choosing materials via imagetarget
1) Placing chosen model (with chosen material) on ground plane via plane finder (plane finder?)
1) (optional) Repeat steps 1-4 and place other models or the same with different material - it's up to you
1) Check your placed models
1) Share a screenshot if wanted

## TODO new

- groundplane placement zum laufen bringen
- doku
- presenation (reveal.js?)
- editorconfig? <https://github.com/zaikman/unity-editorconfig>

- github page for the project <https://barokai.github.io/FurnitAR/>
  - <https://docs.github.com/en/pages/setting-up-a-github-pages-site-with-jekyll/creating-a-github-pages-site-with-jekyll>
  - minimal theme (to be styled with LALALA and BADA55) <https://github.com/pages-themes/minimal>
  - provide download of doku, presentation, imagetargets and apk - that's it.
  - add favicon <https://ptc-it.de/add-favicon-to-mm-jekyll-site/>
- add hr. anthes to github collaborators <https://github.com/Barokai/FurnitAR/settings/access> (not needed if page with download links works)
  - setup github actions to build project automatically <https://game.ci/docs/github/getting-started>
