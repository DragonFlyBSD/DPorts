# New ports collection makefile for:	p5-Log-Any-Adapter-Log4perl
# Date created:				January 13th 2011
# Whom:	      				Evgeniy Kosov <evgeniy@kosov.su>
#
# $FreeBSD: ports/devel/p5-Log-Any-Adapter-Log4perl/Makefile,v 1.3 2012/11/17 05:56:20 svnexp Exp $
#

PORTNAME=	Log-Any-Adapter-Log4perl
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log::Any adapter for Log4perl

RUN_DEPENDS=	p5-File-Temp>=0.20:${PORTSDIR}/devel/p5-File-Temp \
		p5-Log-Any-Adapter>0:${PORTSDIR}/devel/p5-Log-Any-Adapter \
		p5-Log-Log4perl>0:${PORTSDIR}/devel/p5-Log-Log4perl
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Log::Any::Adapter::Log4perl.3

.include <bsd.port.mk>
