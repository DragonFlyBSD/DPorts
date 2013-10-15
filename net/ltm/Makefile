# Created by: Statseeker
# $FreeBSD: net/ltm/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	ltm
PORTVERSION=	3.0.0.608281003
CATEGORIES=	net
MASTER_SITES=	http://www.statseeker.com/downloads/

MAINTAINER=	ltm-support@statseeker.com
COMMENT=	Statseeker Real Time LAN Analyser

NO_BUILD=	yes

MAN1=		ltm.1 ltm-client.1 ltm-mkprotodb.1
MANCOMPRESSED=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

s: .IGNORE

do-install:
	@(tar -cf - -C ${WRKSRC} . | tar -xf - -C ${PREFIX})

.include <bsd.port.post.mk>
