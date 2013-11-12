# Created by: devin@spamcop.net
# $FreeBSD: devel/p5-Log-Agent-Logger/Makefile 332046 2013-10-30 02:52:46Z vanilla $

PORTNAME=	Log-Agent-Logger
PORTVERSION=	0.2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TBONE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log::Agent::Logger - a logging interface for perl

BUILD_DEPENDS=	p5-Log-Agent>=0:${PORTSDIR}/devel/p5-Log-Agent \
		p5-Getargs-Long>=0:${PORTSDIR}/devel/p5-Getargs-Long
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
