# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: security/p5-PGP/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	PGP
PORTVERSION=	0.3a
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module to work with PGP messages

BUILD_DEPENDS=	pgp:${PORTSDIR}/security/pgp

USES=		perl5
USE_PERL5=	configure

MAN3=		PGP::Pipe.3

NO_STAGE=	yes
pre-configure:
		@${CP} ${WRKSRC}/PGP/Pipe.pm ${WRKSRC}

.include <bsd.port.mk>
