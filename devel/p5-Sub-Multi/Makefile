# ex:ts=8
# Ports collection makefile for:	Sub::Multi
# Date created:			Aug 1, 2006
# Whom:				ijliao
#
# $FreeBSD: ports/devel/p5-Sub-Multi/Makefile,v 1.4 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	Sub-Multi
PORTVERSION=	0.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Data::Bind-based multi-sub dispatch

BUILD_DEPENDS=	p5-Class-Multimethods-Pure>=0.11:${PORTSDIR}/devel/p5-Class-Multimethods-Pure \
		p5-Data-Bind>=0.26:${PORTSDIR}/devel/p5-Data-Bind \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Sub::Multi.3

.include <bsd.port.mk>
