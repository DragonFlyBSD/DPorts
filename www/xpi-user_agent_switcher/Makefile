# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: www/xpi-user_agent_switcher/Makefile 341219 2014-01-26 15:14:34Z miwi $

PORTNAME=	user_agent_switcher
PORTVERSION=	0.7.3
DISTVERSIONSUFFIX=	-fx+sm
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The User Agent Switcher extension

XPI_NUM=	59
XPI_ID=		{e968fc70-8f95-4ab9-9e79-304de2a71ee1}
XPI_FILES=	chrome.manifest \
		chrome/useragentswitcher.jar \
		install.js install.rdf \
		license.txt
XPI_DIRS=	chrome

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
