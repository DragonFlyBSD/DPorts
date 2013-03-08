# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Method-Signatures-Simple/Makefile,v 1.7 2013/01/21 09:45:59 svnexp Exp $

PORTNAME=	Method-Signatures-Simple
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RHESA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Basic method declarations with signatures, without source filters

BUILD_DEPENDS=	p5-Devel-Declare>=0:${PORTSDIR}/devel/p5-Devel-Declare
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Method::Signatures::Simple.3

.include <bsd.port.mk>
