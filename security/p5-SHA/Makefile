# Created by: Jim Geovedi <jim@corebsd.or.id>
# $FreeBSD: security/p5-SHA/Makefile 332949 2013-11-06 07:39:31Z vanilla $

PORTNAME=	SHA
PORTVERSION=	2.01
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GAAS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the SHA1 algorithm

RUN_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
