# Created by: Hon-Yu Lawrence Cheung (cheunghonyu@gmail.com)
# $FreeBSD: deskutils/rednotebook/Makefile 336807 2013-12-18 09:18:27Z culot $

PORTNAME=	rednotebook
PORTVERSION=	1.8.0
CATEGORIES=	deskutils python
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	rednotebook
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cheunghonyu@gmail.com
COMMENT=	Modern journal written in Python

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-yaml \
		${PYTHON_PKGNAMEPREFIX}webkitgtk>0:${PORTSDIR}/www/py-webkitgtk \
		${LOCALBASE}/bin/xdg-open:${PORTSDIR}/devel/xdg-utils \
		${PYTHON_PKGNAMEPREFIX}chardet>0:${PORTSDIR}/textproc/py-chardet

USES=		desktop-file-utils gettext

INSTALLS_ICONS=	yes
USE_GNOME=	pygtk2
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
