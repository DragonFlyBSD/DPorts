# Created by: Douglas K. Rand (rand@meridian-enviro.com)
# $FreeBSD: math/p5-NetCDF/Makefile 327033 2013-09-12 06:03:58Z az $

PORTNAME=	NetCDF
PORTVERSION=	1.2.4
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	ftp://ftp.unidata.ucar.edu/pub/netcdf-perl/
PKGNAMEPREFIX=	p5-
DISTNAME=	netcdf-perl-${PORTVERSION}

MAINTAINER=	rand@meridian-enviro.com
COMMENT=	Perl5 module to read and write netCDF files

NETCDF_VER?=	4

.if (${NETCDF_VER} == 4)
LIB_DEPENDS=	netcdf.7:${PORTSDIR}/science/netcdf4
.else
LIB_DEPENDS=	netcdf.4:${PORTSDIR}/science/netcdf
.endif

USES=		perl5

WRKSRC=		${WRKDIR}/${DISTNAME}/src
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CPP_NETCDF=-I${LOCALBASE}/include LD_NETCDF=-lnetcdf \
		PERL_MANDIR=${MAN1PREFIX}/man PERL=${PERL5}

MAN1=		netCDFPerl.1

pre-install:
	@${PERL5} -pi -e 's/ doc_(perl|site|\$$\(INSTALLDIRS\))_install$$//' ${WRKSRC}/perl/Makefile

.include <bsd.port.mk>
