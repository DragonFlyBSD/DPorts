# Created by: devin@spamcop.net
# $FreeBSD: devel/p5-Log-Agent-Logger/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Log::Agent::Logger.3

.include <bsd.port.mk>
