# Created by: Holger Lamm <holger@e-gitt.net>
# $FreeBSD: net-p2p/mldonkey-gui/Makefile 327758 2013-09-20 22:28:25Z bapt $

# build only the GUI
WITHOUT_CORE=	yes
# unbreak index build with a common variable
.undef WITHOUT_GUI

COMMENT=	A OCAML/GTK GUI for the MLdonkey peer-to-peer network client

MASTERDIR=	${.CURDIR}/../mldonkey

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
