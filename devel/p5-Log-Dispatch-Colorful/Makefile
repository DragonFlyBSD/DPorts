# New ports collection makefile for:	Log::Dispatch::Colorful
# Date created:		22 Jan 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Log-Dispatch-Colorful/Makefile,v 1.5 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Log-Dispatch-Colorful
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for logging to screen

BUILD_DEPENDS=	p5-Filter>0:${PORTSDIR}/devel/p5-Filter \
		p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-Log-Dispatch>0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Params-Validate>0:${PORTSDIR}/devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Log::Dispatch::Colorful.3

.include <bsd.port.mk>
