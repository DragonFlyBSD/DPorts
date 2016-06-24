# based on net/bwn-firmware-kmod
# keep in sync

PORTNAME=	devfw-bwn
PORTVERSION=	0.1.0
CATEGORIES=	sysutils net
MASTER_SITES=	http://downloads.openwrt.org/sources/ \
		http://mirror2.openwrt.org/sources/
DISTFILES=	${FWFILE} ${FWFILE_LP}
EXTRACT_ONLY=

MAINTAINER=	zrj@ef.irc
COMMENT=	Broadcom AirForce IEEE 802.11 Firmware

BUILD_DEPENDS=	b43-fwcutter:sysutils/b43-fwcutter

FIRMWARES=								\
	ucode5 ucode11 ucode13 ucode14 ucode15				\
	pcm5 a0g1initvals5 a0g0initvals5				\
	b0g0initvals5 b0g0initvals13 a0g1bsinitvals5 a0g0bsinitvals5	\
	b0g0bsinitvals5 						\
	lp0initvals13 lp0initvals14 lp0initvals15 lp0bsinitvals13	\
	lp0bsinitvals14 lp0bsinitvals15					\
	n0bsinitvals11

FIRMWARES_LP=								\
	ucode5 ucode11 ucode13 ucode14 ucode15				\
	pcm5 a0g1initvals5 a0g0initvals5				\
	b0g0initvals5 b0g0initvals13 a0g1bsinitvals5 a0g0bsinitvals5	\
	b0g0bsinitvals5 						\
	lp0initvals13 lp0initvals14 lp0initvals15 lp0bsinitvals13	\
	lp0bsinitvals14 lp0bsinitvals15					\
	n0bsinitvals11

WRKSRC=		${WRKDIR}
FWNAME=		bwn_v4
FWFILE=		broadcom-wl-${FWVERSION}.tar.bz2
FWVERSION=	4.150.10.5
FWNAME_LP=	bwn_v4_lp
FWFILE_LP=	broadcom-wl-${FWVERSION_LP}.tar.bz2
FWVERSION_LP=	4.178.10.4

# passthrough to dports
.if !defined(DPORTS_BUILDER)
NO_PACKAGE=	this is a modified version of a restricted firmware
.endif
NO_ARCH=	yes
DATADIR=	${PREFIX}/share/fw-bwn

USES=		uidfix

.if exists(/usr/share/examples/kld/firmware/wrap-fw_module.sh)
PKGINSTALL=	pkg-install.fw
PKGDEINSTALL=	pkg-deinstall.fw
.else
DPMSG=		${WRKDIR}/dports-message
PKGMESSAGE=	${DPMSG}
pre-patch:
	@${ECHO} "#########################################################" >> ${DPMSG}
	@${ECHO} "# Run ${DATADIR}/regen-firmware.sh to create modules #" >> ${DPMSG}
	@${ECHO} "#########################################################" >> ${DPMSG}
.endif

do-build:
	${CP} ${FILESDIR}/regen-firmware.sh ${WRKSRC}/
	${CP} ${FILESDIR}/remove-firmware.sh ${WRKSRC}/
	${REINPLACE_CMD} -e "s@FIRMDIR@${DATADIR}@g"	\
			 -e "s@FIRMW1@${FIRMWARES}@g"		\
			 -e "s@FIRMW2@${FIRMWARES_LP}@g"	\
			 -e "s@FIRMS1@${FWNAME}_@g"		\
			 -e "s@FIRMS2@${FWNAME_LP}_@g"		\
		${WRKSRC}/regen-firmware.sh			\
		${WRKSRC}/remove-firmware.sh
	cd ${WRKSRC} && \
	tar xjf ${DISTDIR}/${FWFILE}
	mkdir -p ${WRKSRC}/bg
	b43-fwcutter -w ${WRKSRC}/bg \
	   ${WRKSRC}/broadcom-wl-${FWVERSION}/driver/wl_apsta_mimo.o

	cd ${WRKSRC} && \
	tar xjf ${DISTDIR}/${FWFILE_LP}
	mkdir -p ${WRKSRC}/lp
	b43-fwcutter -w ${WRKSRC}/lp \
	   ${WRKSRC}/broadcom-wl-${FWVERSION_LP}/linux/wl_apsta.o

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}
	${CP} -rv ${WRKSRC}/bg/v4 ${STAGEDIR}${DATADIR}/bg
	${CP} -rv ${WRKSRC}/lp/v4 ${STAGEDIR}${DATADIR}/lp

.include <bsd.port.mk>
