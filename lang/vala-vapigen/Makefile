# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: lang/vala-vapigen/Makefile 324037 2013-07-31 11:57:45Z kwm $
#   $MCom: ports/trunk/lang/vala-vapigen/Makefile 18374 2013-04-15 09:25:19Z kwm $

PORTREVISION=	0
CATEGORIES=	devel gnome
PKGNAMESUFFIX=	-vapigen

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	The vapigen program from vala

MASTERDIR=	${.CURDIR}/../vala
BUILD_WRKSRC=	${WRKSRC}/vapigen
INSTALL_WRKSRC=	${WRKSRC}/vapigen
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

VALA_SLAVE=	yes

.include "${MASTERDIR}/Makefile"
