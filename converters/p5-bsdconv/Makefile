# Created by: buganini@gmail.com
# $FreeBSD: converters/p5-bsdconv/Makefile 317061 2013-05-01 23:15:14Z bdrewery $

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

PERL_CONFIGURE=	yes

MAN3=		bsdconv.3

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
