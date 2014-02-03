# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-IPC-Cmd/Makefile 341707 2014-01-29 09:19:35Z az $

PORTNAME=	IPC-Cmd
PORTVERSION=	0.84
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Finding and running system commands made easy

COMMON_DEPENDS=	p5-IPC-Run>=0.55:${PORTSDIR}/devel/p5-IPC-Run
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
