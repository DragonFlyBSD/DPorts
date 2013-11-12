# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: security/p5-PGP/Makefile 332949 2013-11-06 07:39:31Z vanilla $

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

pre-configure:
		@${CP} ${WRKSRC}/PGP/Pipe.pm ${WRKSRC}

.include <bsd.port.mk>
