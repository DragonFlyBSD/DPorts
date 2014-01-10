# Created by: Hye-Shik Chang
# $FreeBSD: net/py-pcap/Makefile 337864 2013-12-28 11:35:56Z wg $

PORTNAME=	pcap
PORTVERSION=	0.6.4
CATEGORIES=	net python
MASTER_SITES=	SF/pylib${PORTNAME}/pylib${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pylib${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to LBL Packet Capture library (libpcap)

LICENSE=	BSD

BUILD_DEPENDS=	swig:${PORTSDIR}/devel/swig13

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
