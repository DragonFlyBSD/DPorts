# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/devel/p5-IPC-Cmd/Makefile,v 1.25 2012/12/18 12:18:11 svnexp Exp $

PORTNAME=	IPC-Cmd
PORTVERSION=	0.78
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Finding and running system commands made easy

COMMON_DEPENDS=	p5-IPC-Run>=0.55:${PORTSDIR}/devel/p5-IPC-Run
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	IPC::Cmd.3

.include <bsd.port.mk>
