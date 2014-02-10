# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/devel/p5-Curses-UI/Makefile 331856 2013-10-28 13:46:25Z vanilla $

PORTNAME=	Curses-UI
PORTVERSION=	0.9609
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Curses based OO user interface framework

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Curses>=0:${PORTSDIR}/devel/p5-Curses \
		p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
