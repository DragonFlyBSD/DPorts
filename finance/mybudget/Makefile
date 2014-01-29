# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: finance/mybudget/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	myBudget
PORTVERSION=	0.60
PORTREVISION=	8
CATEGORIES=	finance gnome
MASTER_SITES=	http://www.abisource.com/~msevior/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gtk+-2 finance manager

NO_BUILD=	yes
USE_PYTHON=	yes
USE_GNOME=	pygnome2

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|gobject.so|_gobject.so|' \
	    ${WRKSRC}/install.py

do-install:
	cd ${WRKSRC} && ${PYTHON_CMD} ./install.py ${PREFIX}

.include <bsd.port.mk>
