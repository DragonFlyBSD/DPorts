# New ports collection makefile for:	URI-Template
# Date created:				29 May 2007
# Whom:					Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-URI-Template/Makefile,v 1.8 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	URI-Template
PORTVERSION=	0.16
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

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
