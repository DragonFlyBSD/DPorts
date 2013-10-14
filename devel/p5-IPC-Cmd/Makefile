# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-IPC-Cmd/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

MAN3=	IPC::Cmd.3

NO_STAGE=	yes
.include <bsd.port.mk>
