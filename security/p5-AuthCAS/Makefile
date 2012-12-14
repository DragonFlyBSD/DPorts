# Created by: Frank Wall <fw@moov.de>
# $FreeBSD: ports/security/p5-AuthCAS/Makefile,v 1.4 2012/11/17 06:01:10 svnexp Exp $

PORTNAME=	AuthCAS
PORTVERSION=	1.6
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OSALAUN
PKGNAMEPREFIX=	p5-

MAINTAINER=	fw@moov.de
COMMENT=	A Perl API to Yale's Central Authentication System (CAS)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL

RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		AuthCAS.3

.include <bsd.port.mk>
