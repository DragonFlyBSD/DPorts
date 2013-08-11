# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: net/p5-URI-Template/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	URI-Template
PORTVERSION=	0.17
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object for handling URI templates

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		URI::Template.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
