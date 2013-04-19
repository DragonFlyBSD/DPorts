# Created by: Craig Manley
# $FreeBSD: devel/p5-Log-Dispatch-FileShared/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Log-Dispatch-FileShared
PORTVERSION=	1.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log::Dispatch output class for logging to shared files

BUILD_DEPENDS=	p5-Log-Dispatch>=0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Log::Dispatch::FileShared.3

.include <bsd.port.mk>
