# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: ports/www/p5-Template-Provider-FromDATA/Makefile,v 1.9 2013/02/13 06:44:08 svnexp Exp $

PORTNAME=	Template-Provider-FromDATA
PORTVERSION=	0.13
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pclin@FreeBSD.org
COMMENT=	Load templates from your __DATA__ section

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Template-Toolkit>=2.15:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-Class-Accessor>0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Template::Provider::FromDATA.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501502
BUILD_DEPENDS+=	p5-ExtUtils-MakeMaker>=6.59:${PORTSDIR}/devel/p5-ExtUtils-MakeMaker
.endif

.include <bsd.port.post.mk>
