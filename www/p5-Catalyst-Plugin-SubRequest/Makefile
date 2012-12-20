# Ports collection makefile for:	p5-Catalyst-Plugin-SubRequest
# Date created:			May 6, 2005
# Whom:				Travis Campbell <hcoyote@ghostar.org>
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-SubRequest/Makefile,v 1.21 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-SubRequest
PORTVERSION=	0.20
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make subrequests to actions in Catalyst

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.90000:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Catalyst::Plugin::SubRequest.3

.include <bsd.port.mk>
