# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/devel/p5-Class-InsideOut/Makefile,v 1.19 2013/01/25 09:47:54 svnexp Exp $

PORTNAME=	Class-InsideOut
PORTVERSION=	1.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A safe, simple inside-out object construction kit

BUILD_DEPENDS=	p5-Class-ISA>=0:${PORTSDIR}/devel/p5-Class-ISA
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:1.0301

PERL_CONFIGURE=	yes

MAN3=		Class::InsideOut::Manual::About.3 Class::InsideOut.3 \
		Class::InsideOut::Manual::Advanced.3

.include <bsd.port.mk>
