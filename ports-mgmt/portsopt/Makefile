# Created by: Beat Gaetzi <beat@chruetertee.ch>
# $FreeBSD: ports-mgmt/portsopt/Makefile 327762 2013-09-20 22:36:49Z bapt $

PORTNAME=	portsopt
PORTVERSION=	1.5
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://www.chruetertee.ch/files/download/

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Shows WITH(OUT)-knobs of a port makefile

NO_BUILD=	yes

PLIST_FILES=	sbin/portsopt

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/portsopt ${PREFIX}/sbin

.include <bsd.port.mk>
