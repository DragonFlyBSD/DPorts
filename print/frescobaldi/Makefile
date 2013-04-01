# Created by: martin.dieringer@gmx.de
# $FreeBSD: ports/print/frescobaldi/Makefile,v 1.9 2013/02/03 22:43:57 svnexp Exp $

PORTNAME=	frescobaldi
PORTVERSION=	2.0.8
PORTREVISION=	1
CATEGORIES=	print kde
MASTER_SITES=	http://cloud.github.com/downloads/wbsoft/frescobaldi/

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Music score editor for lilypond

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	lilypond:${PORTSDIR}/print/lilypond \
		${PYTHON_PKGNAMEPREFIX}poppler-qt4>=0:${PORTSDIR}/graphics/py-poppler-qt4

USE_GETTEXT=	yes
INSTALLS_ICONS=	yes
USE_KDE4=	kdeprefix kdelibs pykde4_build pykde4_run
USE_PYTHON=	2.6+
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
