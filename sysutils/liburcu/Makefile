# Created by: Leo Vandewoestijne <freebsd@dns-lab.com>
# $FreeBSD: sysutils/liburcu/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	liburcu
PORTVERSION=	0.7.7
CATEGORIES=	sysutils
MASTER_SITES=	http://lttng.org/files/urcu/
DISTNAME=	userspace-rcu-${PORTVERSION}

MAINTAINER=	freebsd@dns-lab.com
COMMENT=	Userspace read-copy-update (RCU) data synchronization library

LICENSE=	LGPL21

PORTDOCS=	ChangeLog README cds-api.txt rcu-api.txt uatomic-api.txt

USES=		pathfix
USE_BZIP2=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--docdir=${DOCSDIR}

.if defined(.PARSEDIR)
USE_GMAKE=	yes
.endif

regression-test: build
	@cd ${WRKSRC} && ${MAKE} check

.include <bsd.port.mk>
