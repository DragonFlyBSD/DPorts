# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: ports/devel/dreampie/Makefile,v 1.9 2012/12/31 13:09:33 svnexp Exp $

PORTNAME=	dreampie
PORTVERSION=	1.2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Python shell which is designed to be reliable and fun

LICENSE=	GPLv3

USE_GNOME=	pygtk2 pygtksourceview
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes

MAN1=		dreampie.1

pre-patch:
	@${REINPLACE_CMD} -e "s|share/man/man1|man/man1|" ${WRKSRC}/setup.py

.include <bsd.port.mk>
