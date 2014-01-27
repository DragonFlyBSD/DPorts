# Created by: pauls
# $FreeBSD: security/spybye/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	spybye
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	security www
MASTER_SITES=	http://www.monkey.org/~provos/

MAINTAINER=	pauls@utdallas.edu
COMMENT=	A web proxy to detect malware

LIB_DEPENDS=	event-1.4:${PORTSDIR}/devel/libevent

OPTIONS_DEFINE=	CLAMAV
CLAMAV_DESC=	Enable CLAMAV support

USE_RC_SUBR=	spybye
GNU_CONFIGURE=	yes

MAN1=		spybye.1

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MCLAMAV}
LIB_DEPENDS+=	clamav.7:${PORTSDIR}/security/clamav
CONFIGURE_ARGS+=	--with-libclamav=${PREFIX}/bin
.endif

.include <bsd.port.post.mk>
