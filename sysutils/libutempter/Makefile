# Created by: Michael Nottebrock <lofi@FreeBSD.org>,
# $FreeBSD: sysutils/libutempter/Makefile 329642 2013-10-06 23:43:15Z marino $

PORTNAME=	libutempter
PORTVERSION=	1.1.5
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.altlinux.org/pub/people/ldv/utempter/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interface to record user sessions to utmp and wtmp files

USES=		gmake
USE_BZIP2=	yes
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 900004
IGNORE=		is now contained in the base system
.endif

.include <bsd.port.post.mk>
