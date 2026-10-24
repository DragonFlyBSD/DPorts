PORTNAME=	udunits2
PORTVERSION=	0.13.2.2
CATEGORIES=	science
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Udunits-2 Bindings for R
WWW=		https://cran.r-project.org/package=udunits2

LICENSE=	GPLv2

LIB_DEPENDS=	libexpat.so:textproc/expat2 \
		libudunits2.so:science/udunits

USES=		cran:auto-plist,compiles

CONFIGURE_ARGS= ac_cv_lib_udunits2_ut_read_xml=yes
dfly-patch:
	${REINPLACE_CMD} -e 's@\(ac_cv_lib_udunits2_ut_read_xml=\)no@\1yes@g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
