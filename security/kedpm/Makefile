# Created by: Tim Welch <ports@thepentagon.org>
# $FreeBSD: security/kedpm/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	kedpm
PORTVERSION=	0.4.0
PORTREVISION=	8
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@thepentagon.org
COMMENT=	Simple application for managing personal data

RUN_DEPENDS=	${PYTHONPREFIX_SITELIBDIR}/Crypto/__init__.py:${PORTSDIR}/security/py-pycrypto

USE_GNOME=	pygtk2
USE_PYTHON=	2.1+
USE_PYDISTUTILS=	YES

DESKTOP_ENTRIES="Ked Password Manager" \
		"Secure Password Management" \
		"${PREFIX}/share/${PORTNAME}/glade/logo.png" \
		"kedpm" \
		"" \
		true

NO_STAGE=	yes
.include <bsd.port.mk>
