PORTNAME=	typstyle
DISTVERSIONPREFIX=	v
DISTVERSION=	0.11.28
CATEGORIES=	lang

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Reliable typst code formatter
WWW=		https://enter-tainer.github.io/typstyle

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	Enter-tainer

CARGO_CRATES=	addr2line-0.22.0 \
		adler-1.0.2 \
		ahash-0.7.8 \
		aho-corasick-1.1.3 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.6.14 \
		anstyle-1.0.7 \
		anstyle-parse-0.2.4 \
		anstyle-query-1.1.0 \
		anstyle-wincon-3.0.3 \
		anyhow-1.0.86 \
		append-only-vec-0.1.3 \
		approx-0.5.1 \
		arrayref-0.3.7 \
		arrayvec-0.5.2 \
		arrayvec-0.7.4 \
		autocfg-1.3.0 \
		az-1.2.1 \
		backtrace-0.3.72 \
		base64-0.21.7 \
		base64-0.22.1 \
		base64-serde-0.7.0 \
		biblatex-0.9.3 \
		bincode-1.3.3 \
		bit-set-0.5.3 \
		bit-vec-0.6.3 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		bitvec-1.0.1 \
		block-buffer-0.10.4 \
		bumpalo-3.16.0 \
		by_address-1.2.1 \
		bytecheck-0.6.12 \
		bytecheck_derive-0.6.12 \
		bytemuck-1.16.0 \
		byteorder-1.5.0 \
		bytes-1.6.0 \
		camino-1.1.7 \
		cargo-platform-0.1.8 \
		cargo_metadata-0.18.1 \
		cc-1.0.99 \
		cfg-if-1.0.0 \
		chinese-number-0.7.7 \
		chinese-variant-1.1.3 \
		chrono-0.4.38 \
		ciborium-0.2.2 \
		ciborium-io-0.2.2 \
		ciborium-ll-0.2.2 \
		citationberg-0.3.1 \
		clap-4.5.7 \
		clap_builder-4.5.7 \
		clap_derive-4.5.5 \
		clap_lex-0.7.1 \
		cobs-0.2.3 \
		codespan-reporting-0.11.1 \
		color_quant-1.1.0 \
		colorchoice-1.0.1 \
		comemo-0.4.0 \
		comemo-macros-0.4.0 \
		console-0.15.8 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		core_maths-0.1.0 \
		cpufeatures-0.2.12 \
		crc32fast-1.4.2 \
		crossbeam-channel-0.5.13 \
		crossbeam-deque-0.8.5 \
		crossbeam-epoch-0.9.18 \
		crossbeam-queue-0.3.11 \
		crossbeam-utils-0.8.20 \
		crunchy-0.2.2 \
		crypto-common-0.1.6 \
		csv-1.3.0 \
		csv-core-0.1.11 \
		darling-0.20.9 \
		darling_core-0.20.9 \
		darling_macro-0.20.9 \
		dashmap-5.5.3 \
		data-url-0.3.1 \
		deranged-0.3.11 \
		diff-0.1.13 \
		digest-0.10.7 \
		dirs-5.0.1 \
		dirs-sys-0.4.1 \
		displaydoc-0.2.4 \
		downcast-rs-1.2.1 \
		ecow-0.2.2 \
		either-1.12.0 \
		elsa-1.10.0 \
		embedded-io-0.4.0 \
		encode_unicode-0.3.6 \
		encoding_rs-0.8.34 \
		enum-ordinalize-4.3.0 \
		enum-ordinalize-derive-4.3.1 \
		equivalent-1.0.1 \
		errno-0.3.9 \
		escape8259-0.5.3 \
		fancy-regex-0.11.0 \
		fast-srgb8-1.0.0 \
		fastrand-2.1.0 \
		fdeflate-0.3.4 \
		filetime-0.2.23 \
		flate2-1.0.30 \
		float-cmp-0.9.0 \
		fnv-1.0.7 \
		fontconfig-parser-0.5.6 \
		fontdb-0.16.2 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fsevent-sys-4.1.0 \
		fst-0.4.7 \
		funty-2.0.0 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-io-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		fxhash-0.2.1 \
		generic-array-0.14.7 \
		getrandom-0.2.15 \
		gif-0.12.0 \
		gif-0.13.1 \
		gimli-0.29.0 \
		git2-0.18.3 \
		h2-0.3.26 \
		half-2.4.1 \
		hashbrown-0.12.3 \
		hashbrown-0.14.5 \
		hayagriva-0.5.3 \
		heck-0.4.1 \
		heck-0.5.0 \
		hermit-abi-0.3.9 \
		hex-0.4.3 \
		http-0.2.12 \
		http-body-0.4.6 \
		httparse-1.9.2 \
		httpdate-1.0.3 \
		hyper-0.14.29 \
		hyper-rustls-0.24.2 \
		hyper-tls-0.5.0 \
		hypher-0.1.5 \
		iana-time-zone-0.1.60 \
		iana-time-zone-haiku-0.1.2 \
		icu_collections-1.5.0 \
		icu_locid-1.5.0 \
		icu_locid_transform-1.5.0 \
		icu_locid_transform_data-1.5.0 \
		icu_normalizer-1.5.0 \
		icu_normalizer_data-1.5.0 \
		icu_properties-1.5.0 \
		icu_properties_data-1.5.0 \
		icu_provider-1.5.0 \
		icu_provider_adapters-1.5.0 \
		icu_provider_blob-1.5.0 \
		icu_provider_macros-1.5.0 \
		icu_segmenter-1.5.0 \
		icu_segmenter_data-1.5.0 \
		ident_case-1.0.1 \
		idna-1.0.0 \
		if_chain-1.0.2 \
		image-0.24.9 \
		imagesize-0.12.0 \
		indexmap-1.9.3 \
		indexmap-2.2.6 \
		indexmap-nostd-0.4.0 \
		inotify-0.9.6 \
		inotify-sys-0.1.5 \
		insta-1.39.0 \
		instant-0.1.13 \
		ipnet-2.9.0 \
		is_terminal_polyfill-1.70.0 \
		itertools-0.13.0 \
		itoa-1.0.11 \
		jobserver-0.1.31 \
		jpeg-decoder-0.3.1 \
		js-sys-0.3.69 \
		kamadak-exif-0.5.5 \
		kqueue-1.0.8 \
		kqueue-sys-1.0.4 \
		kurbo-0.9.5 \
		lazy_static-1.4.0 \
		libc-0.2.155 \
		libgit2-sys-0.16.2+1.7.2 \
		libm-0.2.8 \
		libredox-0.1.3 \
		libtest-mimic-0.7.3 \
		libz-sys-1.1.18 \
		line-wrap-0.2.0 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.4.14 \
		lipsum-0.9.1 \
		litemap-0.7.3 \
		lock_api-0.4.12 \
		log-0.4.21 \
		memchr-2.7.2 \
		memmap2-0.9.4 \
		mime-0.3.17 \
		mime_guess-2.0.4 \
		miniz_oxide-0.7.3 \
		mio-0.8.11 \
		mutate_once-0.1.1 \
		native-tls-0.2.12 \
		nohash-hasher-0.2.0 \
		notify-6.1.1 \
		num-bigint-0.4.5 \
		num-conv-0.1.0 \
		num-integer-0.1.46 \
		num-traits-0.2.19 \
		num_cpus-1.16.0 \
		num_threads-0.1.7 \
		numerals-0.1.4 \
		object-0.35.0 \
		once_cell-1.19.0 \
		openssl-0.10.64 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-sys-0.9.102 \
		option-ext-0.2.0 \
		palette-0.7.6 \
		palette_derive-0.7.6 \
		parking_lot-0.12.3 \
		parking_lot_core-0.9.10 \
		paste-1.0.15 \
		path-clean-1.0.1 \
		pathdiff-0.2.1 \
		pdf-writer-0.9.3 \
		percent-encoding-2.3.1 \
		phf-0.11.2 \
		phf_generator-0.11.2 \
		phf_macros-0.11.2 \
		phf_shared-0.11.2 \
		pico-args-0.5.0 \
		pin-project-lite-0.2.14 \
		pin-utils-0.1.0 \
		pixglyph-0.3.0 \
		pkg-config-0.3.30 \
		plist-1.6.1 \
		png-0.17.13 \
		portable-atomic-1.6.0 \
		postcard-1.0.8 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.17 \
		pretty-0.12.3 \
		pretty_assertions-1.4.0 \
		proc-macro2-1.0.85 \
		psm-0.1.21 \
		ptr_meta-0.1.4 \
		ptr_meta_derive-0.1.4 \
		qcms-0.3.0 \
		quick-xml-0.31.0 \
		quote-1.0.36 \
		radium-0.7.0 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		rayon-1.10.0 \
		rayon-core-1.12.1 \
		redox_syscall-0.4.1 \
		redox_syscall-0.5.1 \
		redox_users-0.4.5 \
		reflexo-0.5.0-rc4 \
		regex-1.10.5 \
		regex-automata-0.4.7 \
		regex-syntax-0.8.4 \
		rend-0.4.2 \
		reqwest-0.11.27 \
		resvg-0.38.0 \
		rgb-0.8.37 \
		ring-0.17.8 \
		rkyv-0.7.44 \
		rkyv_derive-0.7.44 \
		roxmltree-0.19.0 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustc_version-0.4.0 \
		rustix-0.38.34 \
		rustls-0.21.12 \
		rustls-pemfile-1.0.4 \
		rustls-webpki-0.101.7 \
		rustversion-1.0.17 \
		rustybuzz-0.12.1 \
		ryu-1.0.18 \
		same-file-1.0.6 \
		schannel-0.1.23 \
		scopeguard-1.2.0 \
		sct-0.7.1 \
		seahash-4.1.0 \
		security-framework-2.11.0 \
		security-framework-sys-2.11.0 \
		semver-1.0.23 \
		serde-1.0.203 \
		serde_derive-1.0.203 \
		serde_json-1.0.117 \
		serde_repr-0.1.19 \
		serde_spanned-0.6.6 \
		serde_urlencoded-0.7.1 \
		serde_with-3.8.1 \
		serde_with_macros-3.8.1 \
		serde_yaml-0.9.34+deprecated \
		sha2-0.10.8 \
		simd-adler32-0.3.7 \
		simdutf8-0.1.4 \
		similar-2.5.0 \
		simplecss-0.2.1 \
		siphasher-0.3.11 \
		siphasher-1.0.1 \
		slab-0.4.9 \
		slotmap-1.0.7 \
		smallvec-1.13.2 \
		socket2-0.5.7 \
		spin-0.9.8 \
		stable_deref_trait-1.2.0 \
		stacker-0.1.15 \
		strict-num-0.1.1 \
		strsim-0.11.1 \
		strum-0.25.0 \
		strum-0.26.2 \
		strum_macros-0.25.3 \
		strum_macros-0.26.4 \
		subsetter-0.1.1 \
		svg2pdf-0.10.0 \
		svgtypes-0.13.0 \
		syn-1.0.109 \
		syn-2.0.66 \
		sync_wrapper-0.1.2 \
		synstructure-0.13.1 \
		syntect-5.2.0 \
		system-configuration-0.5.1 \
		system-configuration-sys-0.5.0 \
		tap-1.0.1 \
		tar-0.4.41 \
		tempfile-3.10.1 \
		termcolor-1.4.1 \
		thiserror-1.0.61 \
		thiserror-impl-1.0.61 \
		threadpool-1.8.1 \
		time-0.3.36 \
		time-core-0.1.2 \
		time-macros-0.2.18 \
		tiny-skia-0.11.4 \
		tiny-skia-path-0.11.4 \
		tinystr-0.7.6 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.38.0 \
		tokio-native-tls-0.3.1 \
		tokio-rustls-0.24.1 \
		tokio-util-0.7.11 \
		toml-0.8.14 \
		toml_datetime-0.6.6 \
		toml_edit-0.22.14 \
		tower-service-0.3.2 \
		tracing-0.1.40 \
		tracing-core-0.1.32 \
		try-lock-0.2.5 \
		ttf-parser-0.20.0 \
		two-face-0.3.0 \
		typed-arena-2.0.2 \
		typenum-1.17.0 \
		typst-0.11.1 \
		typst-assets-0.11.1 \
		typst-macros-0.11.1 \
		typst-pdf-0.11.1 \
		typst-render-0.11.1 \
		typst-syntax-0.11.1 \
		typst-timing-0.11.1 \
		typst-ts-compiler-0.5.0-rc4 \
		typst-ts-core-0.5.0-rc4 \
		unic-langid-0.9.5 \
		unic-langid-impl-0.9.5 \
		unicase-2.7.0 \
		unicode-bidi-0.3.15 \
		unicode-bidi-mirroring-0.1.0 \
		unicode-ccc-0.1.2 \
		unicode-ident-1.0.12 \
		unicode-math-class-0.1.0 \
		unicode-normalization-0.1.23 \
		unicode-properties-0.1.1 \
		unicode-script-0.5.6 \
		unicode-segmentation-1.11.0 \
		unicode-vo-0.1.0 \
		unicode-width-0.1.13 \
		unsafe-libyaml-0.2.11 \
		unscanny-0.1.0 \
		untrusted-0.9.0 \
		url-2.5.1 \
		usvg-0.38.0 \
		usvg-parser-0.38.0 \
		usvg-text-layout-0.38.0 \
		usvg-tree-0.38.0 \
		utf16_iter-1.0.5 \
		utf8_iter-1.0.4 \
		utf8parse-0.2.2 \
		uuid-1.8.0 \
		vcpkg-0.2.15 \
		vergen-8.3.1 \
		version_check-0.9.4 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		wasmi-0.31.2 \
		wasmi_arena-0.4.1 \
		wasmi_core-0.13.0 \
		wasmparser-nostd-0.100.2 \
		web-sys-0.3.69 \
		webpki-roots-0.25.4 \
		weezl-0.1.8 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.8 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-core-0.52.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.5 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.5 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.5 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.5 \
		windows_i686_gnullvm-0.52.5 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.5 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.5 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.5 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.5 \
		winnow-0.6.13 \
		winreg-0.50.0 \
		write16-1.0.0 \
		writeable-0.5.5 \
		wyz-0.5.1 \
		xattr-1.3.1 \
		xmlparser-0.13.6 \
		xmlwriter-0.1.0 \
		xmp-writer-0.2.0 \
		yaml-rust-0.4.5 \
		yansi-0.5.1 \
		yoke-0.7.4 \
		yoke-derive-0.7.4 \
		zerofrom-0.1.4 \
		zerofrom-derive-0.1.4 \
		zerotrie-0.1.3 \
		zerovec-0.10.2 \
		zerovec-derive-0.10.2

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
