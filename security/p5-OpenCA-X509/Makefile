# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: security/p5-OpenCA-X509/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	OpenCA-X509
PORTVERSION=	0.9.10
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for handling X509 Certificates

BUILD_DEPENDS=	p5-X500-DN>=0:${PORTSDIR}/net/p5-X500-DN
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

PORTSCOUT=	skipv:0.9.47

NO_STAGE=	yes
.include <bsd.port.mk>
