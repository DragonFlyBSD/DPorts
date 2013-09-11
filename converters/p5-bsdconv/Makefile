# Created by: buganini@gmail.com
# $FreeBSD: converters/p5-bsdconv/Makefile 326870 2013-09-10 07:12:35Z az $

PORTNAME=	bsdconv
PORTVERSION=	10.0.0
CATEGORIES=	converters perl5
PKGNAMEPREFIX=	p5-
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

MAINTAINER=	buganini@gmail.com
COMMENT=	Perl wrapper for bsdconv

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_COMMIT=	092d398
GH_PROJECT=	perl-${PORTNAME}

USES=		perl5
USE_PERL5=	configure

MAN3=		bsdconv.3

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
